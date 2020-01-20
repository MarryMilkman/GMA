#include <Dollar.hpp>

std::map<int, std::string>	Dollar::dictionary = {
	{0, "zero"},
	{1, "one"},
	{2, "two"},
	{3, "three"},
	{4, "four"},
	{5, "five"},
	{6, "six"},
	{7, "seven"},
	{8, "eight"},
	{9, "nine"},
	{10, "ten"},

	{11, "eleven"},
	{12, "twelve"},
	{13, "thirteen"},
	{14, "fourteen"},
	{15, "fifteen"},
	{16, "sixteen"},
	{17, "seventeen"},
	{18, "eighteen"},
	{19, "nineteen"},

	{20, "twenty"},
	{30, "thirty"},
	{40, "forty"},
	{50, "fifty"},
	{60, "sixty"},
	{70, "seventy"},
	{80, "eighty"},
	{90, "ninety"},
	{100, "hundred"},
	{1000, "thousand"}
};

Dollar::Dollar(std::string str_nbr) {
	this->_value = std::stold(str_nbr);
}

Dollar::Dollar(long double value) {
	this->_value = value;
}

Dollar::Dollar(Dollar const &ref) {
	*this = ref;
}

Dollar::~Dollar() {}

Dollar	&Dollar::operator=(Dollar const &ref) {
	this->_value = ref._value;
	return *this;
}

long double 			Dollar::get_value() {
	return this->_value;
}


std::string		Dollar::convert_to_words() {
	std::stringstream	ss_words;
	long double			value = this->_value;
	long				in_cents = this->_value * 100;
	long				cents = in_cents - (long)(in_cents / 100) * 100;
	long 				hundreds = value - (long)(value / 1000) * 1000;
	value /= 1000;
	long 				thousand = value - (long)(value / 1000) * 1000;
	value /= 1000;
	long 				millions = value - (long)(value / 1000) * 1000;
	value /= 1000;
	long 				billions = value - (long)(value / 1000) * 1000;

	// std::cerr << cents << "\n";
	// std::cerr << hundreds << "\n";
	// std::cerr << thousand << "\n";
	// std::cerr << millions << "\n";
	// std::cerr << billions << "\n";
	if (billions)
		ss_words << this->_get_words(billions) << "billion ";
	if (millions)
		ss_words << this->_get_words(millions) << "million ";
	if (thousand)
		ss_words << this->_get_words(thousand) << "thousand ";
	if (hundreds)
		ss_words << this->_get_words(hundreds);
	if (!value)
		ss_words << "0 ";
	ss_words << "dollar";
	if (hundreds > 1 || thousand || millions || billions)
		ss_words << "s";
	ss_words << " ";
	if (cents > 0) {		
		ss_words << this->_get_words(cents) << "cent";
		if (cents > 1)
			ss_words << "s";
	}
	return ss_words.str();
}


std::string 	Dollar::_get_words(int nbr) {
	int					hundreds = nbr / 100;
	int 				second_purt = nbr - hundreds * 100;
	std::stringstream	ss_words;

	if (hundreds)
		ss_words << Dollar::dictionary[hundreds] << " " << Dollar::dictionary[100] << " ";
	if (second_purt) {
		if (second_purt <= 20)
			ss_words << Dollar::dictionary[second_purt] << " ";
		else {
			int 	tens = second_purt / 10;
			int		units = second_purt - tens * 10;

			ss_words << Dollar::dictionary[tens * 10];
			if (units)
				ss_words << "-" << Dollar::dictionary[units];
			ss_words << " ";
		}
	}
	return ss_words.str();
}