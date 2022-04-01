#include "replaceString.hpp"

std::string	replaceString(std::string text, std::string from, std::string to) {
	std::string all;
	std::size_t found = text.find(from);
	if (found == std::string::npos)
		return (text);
	while (found != std::string::npos) {
		all += text.substr(0, found);
		all += to;
		text = &text[found + from.length()];
		found = text.find(from);
	}
    all += text;
	return (all);
}
