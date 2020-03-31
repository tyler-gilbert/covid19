#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <sapi/var.hpp>
#include <sapi/fs.hpp>
#include "Object.hpp"
#include "Compilation.hpp"

class MarkdownFilePrinter : public MarkdownPrinter {
public:
	MarkdownFilePrinter(File & file) : m_file(file), m_buffer(1024*100){}

	void print_final(const char * fmt, ...){
		va_list list;
		va_start(list, fmt);
		vsnprintf(m_buffer.to_char(), m_buffer.size()-1, fmt, list);
		va_end(list);
		m_file.write(String(m_buffer.to_const_char()));
	}

private:
	File & m_file;
	Data m_buffer;
};

class Renderer : public Object {
public:
	Renderer();

	void execute();

private:

	bool m_is_create_world;
	String m_input_file;
	String m_input_directory;
	String m_output_directory;
	File m_output_file;
	MarkdownFilePrinter m_file_printer;

	void load_options();
	void process_world();
	void process_directory();

	void process_compilation_group(
			const CompilationGroup & group
			);

	void process_country_directory(const String & directory_path);
	void process_file(const String & file_path);


	void process_compilation(
			const Compilation& compilation,
			bool is_show_notes = false
			);

	MarkdownFilePrinter& file_printer(){
		return m_file_printer;
	}

	void write_demographics(const Compilation & compiliation);


};

#endif // RENDERER_HPP
