#include "ReplaceStrings.hpp"

ReplaceStrings::ReplaceStrings( void )
	: _text(NULL), _from(NULL), _to("") {
};

ReplaceStrings::ReplaceStrings( std::string* text, std::string from, std::string to )
	: _text(text), _from(from), _to(to) {
};

ReplaceStrings & ReplaceStrings::operator=( ReplaceStrings const & rhs ) {
	if ( this != &rhs ) {
		this->_text = rhs._text;
		this->_from = rhs._from;
		this->_to = rhs._to;
	}
	return *this;
};

ReplaceStrings::~ReplaceStrings( void ) {
};

std::string	ReplaceStrings::getFrom( void ) const {
	return this->_from;
};

std::string	ReplaceStrings::getTo( void ) const {
	return this->_to;
};

std::string*	ReplaceStrings::getText( void ) const {
	return this->_text;
};

void	ReplaceStrings::setText( std::string* text ) {
	this->_text = text;
};

void	ReplaceStrings::setFrom( std::string from ) {
	this->_from = from;
};

void	ReplaceStrings::setTo( std::string to ) {
	this->_to = to;
};

std::string	ReplaceStrings::replace( void ) {
	std::string	new_text;
	std::string temp_text;

	this->_checkStrings();
	temp_text = *this->_text;
	std::size_t	found = temp_text.find(this->_from);
	if (found == std::string::npos)
		return (temp_text);
	while (found != std::string::npos) {
		new_text += temp_text.substr(0, found);
		new_text += this->_to;
		temp_text = &temp_text[found + this->_from.length()];
		found = temp_text.find(this->_from);
	}
	new_text += temp_text;
	return (new_text);
}

const char *ReplaceStrings::textNotSet::what() const throw() {
	return "Text not set";
}

const char *ReplaceStrings::fromNotSet::what() const throw() {
	return "From not set";
}
