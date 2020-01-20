#ifndef DOLLAR_HPP
# define DOLLAR_HPP

#include "lib.h"

class Dollar
{
public:
	Dollar(std::string str_nbr);
	Dollar(long double value);
	Dollar(Dollar const &ref);
	~Dollar();
	
	Dollar	&operator=(Dollar const &ref);

	long double 							get_value();
	std::string 						convert_to_words();

	static std::map<int, std::string>	dictionary;
private:
	std::string							_get_words(int nbr);

	long double	_value;
};


#endif