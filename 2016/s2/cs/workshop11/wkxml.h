#ifndef WK_XML_H
#define WK_XML_H

#include <string>

// the wkxml class writes XML nodes and data to cout
// in element names must only include, letters, digits, '-' '_' and '.'
// it will translate <,>,&,'," to HTML entities
class wkxml
{
public:
	static void open_node(std::string element) ;	// outputs <elementname>
	static void node_text(std::string content) ;	// outputs the content but translates &,<,>,',"
	static void close_node(std::string element) ;	// outputs </elementname>
};
#endif //WK_XML_H
