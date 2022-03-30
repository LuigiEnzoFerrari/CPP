#include "Conversion.hpp"

Conversion::Conversion( void ): target_("42") {
}

Conversion::Conversion( std::string target ): target_(target) {
	if (isdigit(target[0]) == false && target.length() > 1) {
		throw Conversion::NotaValidInput();
	}
}

Conversion::Conversion(const Conversion &src) {
	*this = src;
}

Conversion::~Conversion( void ) {
}

Conversion &Conversion::operator=(const Conversion& rhs) {
	if (this == &rhs) {
		this->target_ = rhs.getTarget();
	}
	return (*this);
}

const char *Conversion::NotaValidInput::what() const throw() {
				return "This is not a valid input";
}

std::string Conversion::getTarget( void ) const {
	return (this->target_);
}
void	Conversion::setTarget( std::string target ) {
	if (target[0] == '-') {
		if (isdigit(target[1]) == false)
			throw Conversion::NotaValidInput();
	}
	else if (isdigit(target[0]) == false && target.length() > 1)
		throw Conversion::NotaValidInput();
	this->target_ = target;
}

char	Conversion::toChar( void ) const {
	return (
		static_cast<char>(std::atoi(this->target_.c_str()))
	);
}

int	Conversion::toInt( void ) const {
	return (
		static_cast<int>(std::atoi(this->target_.c_str()))
	);
}

float	Conversion::toFloat( void ) const {
	return (
		static_cast<float>(std::atof(this->target_.c_str()))
	);
}
double	Conversion::toDouble( void ) const {
	return (
		static_cast<double>(std::atof(this->target_.c_str()))
	);
}
