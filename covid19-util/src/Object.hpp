#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <sapi/sys.hpp>


class Object {
public:

	static void set_cli(Cli & cli){ m_cli = &cli; }
	static Cli & cli(){ return *m_cli; }

	static Printer & printer(){
		return m_yaml_printer;
	}


private:
	static Cli * m_cli;
	static YamlPrinter m_yaml_printer;
};

#endif // OBJECT_HPP
