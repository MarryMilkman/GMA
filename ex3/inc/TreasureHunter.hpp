#ifndef TREASURE_HUNTER
# define TREASURE_HUNTER

# include "lib.h"
# include "Case.hpp"

class TreasureHunter
{
public:
	TreasureHunter();
	TreasureHunter(std::string	path_to_map);
	~TreasureHunter();

	void 		read_map(std::string path_to_map);
	std::string	get_search_plan();

private:
	std::vector<Case>			_list_cases;
	std::string 				_result;
	// std::vector<Chest>						list_chest;
	// std::map<int /*type key*/, int /*nbr key*/> 	list_keys;

	Case 						_get_case(std::fstream &file);

	std::string 				_r_solve_case(Case &current_case, int recursion);


};

#endif