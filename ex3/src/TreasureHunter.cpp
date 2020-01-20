#include <TreasureHunter.hpp>

TreasureHunter::TreasureHunter() {
}

TreasureHunter::TreasureHunter(std::string path_to_map) {
	this->read_map(path_to_map);
}

TreasureHunter::~TreasureHunter() {
}

void 		TreasureHunter::read_map(std::string path_to_map) {
	std::fstream	file(path_to_map);
	std::string 	line;
	int 			nbr_cases;

	this->_result.clear();
	this->_list_cases.clear();
	if (!file.is_open())
		return ;
	getline(file, line);
	try {
		nbr_cases = std::stoi(line);
				
		while (nbr_cases--) {
			try {
				this->_list_cases.push_back(this->_get_case(file));
			} catch (std::exception & e){
				std::cerr << "Exception on " << nbr_cases << " case (starting from the end)\n";
				return ;
			}
		}
	} catch (std::exception & e){
		std::cerr << "Exception on " << nbr_cases << " case (starting from the end)\n";
		return ;
	}
}

Case 		TreasureHunter::_get_case(std::fstream &file) {
	Case 				new_case;
	int 				nbr_keys;
	int 				nbr_chests;
	std::string			line;
	std::string 		element;
	std::stringstream	ss;
	int 				count;

	// 1 part
	getline(file, line);
	ss = std::stringstream(line);
	count = 0;
	while (ss >> element) {
		if (count == 0)
			nbr_keys = std::stoi(element);
		else if (count == 1)
			nbr_chests = std::stoi(element);
		else
			throw std::exception();
		count++;
	}
	// 2 part
	getline(file, line);
	ss = std::stringstream(line);
	count = 0;
	while (ss >> element) {
		if (count > nbr_keys) {
			std::cerr << "ERROR: invalid nbr keys (>)\n";
			throw std::exception();
		}
		int 	type_key = std::stoi(element);

		if (new_case.map_available_keys.count(type_key) == false)
			new_case.map_available_keys[type_key] = 0;
		new_case.map_available_keys[type_key]++;
		count++;
	}
	if (count != nbr_keys) {
		std::cerr << "ERROR: invalid nbr keys (!=)\n";
		throw std::exception();
	}
	// 3 part
	ss = std::stringstream(line);
	count = 0;
	while (count++ < nbr_chests && getline(file, line)) {
		Chest	chest(line);

		chest.number = count;
		new_case.list_chest.push_back(chest);
	}
	if (count < nbr_chests) {
		std::cerr << "ERROR: invalid nbr chests (<)\n";
		throw std::exception();
	}
	return new_case;
}






////////////////////////////////////////////
// LOGICS
////////////////////////////////////////////
std::string	TreasureHunter::get_search_plan() {
	if (!this->_result.empty())
		return this->_result;
	int 	i = 1;

	for (Case current_case : this->_list_cases) {
		this->_result += std::string("Case #") + std::to_string(i++) + std::string(": ");
		std::cerr << "Case # " << i - 1 << ";\nnbr chest: " << current_case.list_chest.size() << "\n";
		this->_result += this->_r_solve_case(current_case, 0) + "*\n";
	}
	if (this->_result.empty())
		this->_result = "No map\n";
	return this->_result;
}

std::string TreasureHunter::_r_solve_case(Case &current_case, int recursion) {
	std::vector<Chest>							&current_list_chest = current_case.list_chest;
	std::map<int /*type key*/, int /*count*/>	map_keys = current_case.map_available_keys;				
	std::string 								result;
	int						nbr_close_chest = current_case.count_close_chest();	

	recursion++;

	if (!nbr_close_chest)
		return "";
	for (Chest &chest : current_list_chest) {
		int	nbr_keys = current_case.count_keys();
		int	nbr_close_chest = current_case.count_close_chest();

		if (!nbr_keys && nbr_close_chest)
			return "IMPOSSIBLE";
		if (chest.is_open)
			continue;

		// std::string lll;
		// getline(std::cin, lll);
		// std::cerr << "loock chest #" << chest.number << ", type "
		// 		<< chest.get_type() << ", rec " << recursion << "\n";
		// std::cerr << "nbr_keys - " << nbr_keys << " nbr_close_chest - " << nbr_close_chest << "\n";

		if (map_keys[chest.get_type()] > 0) {
			std::string 		next_step_result;
			std::map<int, int>	new_map_keys = map_keys;

			// std::cerr << "SUCCESS chest #" << chest.number << ", type "
			// 	<< chest.get_type() << ", rec " << recursion << "\n";
			
			new_map_keys[chest.get_type()]--;
			for (int type_key : chest.list_keys) {
				new_map_keys[type_key]++;
			}
			current_case.map_available_keys = new_map_keys;
			
			chest.is_open = true;			
			result = std::to_string(chest.number);
			next_step_result = this->_r_solve_case(current_case, recursion);
			if (next_step_result != "IMPOSSIBLE") {
				result += " " + next_step_result;
				return result;
			}
			current_case.map_available_keys = map_keys;
			chest.is_open = false;
			result = "IMPOSSIBLE";
		}
	}
	// std::cerr << "NO WAY!\n";
	if (result.empty())
		return "IMPOSSIBLE";
	return result;
}