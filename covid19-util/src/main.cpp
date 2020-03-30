
#include <sapi/fs.hpp>
#include <sapi/var.hpp>
#include "Object.hpp"
#include "Importer.hpp"
#include "Renderer.hpp"

int main(int argc, char * argv[]){
	Cli cli(argc, argv, SOS_GIT_HASH);
	Object::set_cli(cli);

	Object::printer().set_verbose_level(cli.get_option("verbose"));

	String output = cli.get_option(
				"output",
				Cli::Description("path to output folder")
				);
	if( output.is_empty() ){ output = "markdown"; }

	if( cli.get_option(
				"pull",
				Cli::Description("pull John Hopkins data from Github")
				) == "true" ){
		String command;
		if( Dir::exists("data/COVID-19") ){
			command = "cmake -E chdir data/COVID-19 git pull";
		} else {
			command = "cmake -E chdir data git clone https://github.com/CSSEGISandData/COVID-19.git";
		}
		Dir::create("data");
		system(command.cstring());
	}

	if( cli.get_option(
				"import",
				Cli::Description("import CSV files and process them to JSON")
				) == "true" ){
		Importer()
				.execute();
	}

	if( cli.get_option(
				"render",
				Cli::Description("render JSON data files as markdown with embedded charts")
				) == "true" ){
		//create markdown output files
		Renderer()
				.execute();
	}

	return 0;
}
