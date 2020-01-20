#ifndef CASE_HPP
#define CASE_HPP

#include "lib.h"
#include "Chest.hpp"


class Case
{
public:
	Case();
	Case(Case const & ref);
	~Case();
	Case	&operator=(Case const & ref);

	std::vector<Chest>							list_chest;
	std::map<int /*type key*/, int /*count*/>	map_available_keys;

	int 		count_keys() const;
	int 		count_close_chest() const;

};

#endif