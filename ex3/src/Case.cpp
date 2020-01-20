#include <Case.hpp>

Case::Case() {
}

Case::Case(Case const & ref) {
	*this = ref;
}

Case::~Case() {
}

Case	&Case::operator=(Case const & ref) {
	this->list_chest = ref.list_chest;
	this->map_available_keys = ref.map_available_keys;
	return *this;
}

int 	Case::count_keys() const {
	int 	count = 0;

	for (auto item : this->map_available_keys) {
		// std::cerr << item.first << " : " << item.second << "\n";
		count += item.second;
	}
	return count;
}

int 	Case::count_close_chest() const {
	int 	count = 0;

	for (Chest chest : this->list_chest) {
		if (chest.is_open == false)
			count++;
	}
	return count;
}