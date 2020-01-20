#ifndef CHEST_HPP
# define CHEST_HPP

# include "lib.h"

class Chest
{
public:
	Chest(std::string line);
	Chest();
	Chest(Chest const & ref);
	~Chest();
	
	std::vector<int>	list_keys;
	bool				is_open;
	int 				number;

	void 	init(std::string line);
	int 	get_type() const;

	Chest	&operator=(Chest const & ref);

private:
	int 	_type;

};

#endif