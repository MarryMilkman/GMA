#include <Chest.hpp>

Chest::Chest(std::string line) {
	this->init(line);
}

Chest::Chest() {
}

Chest::Chest(Chest const & ref) {
	*this = ref;
}

Chest::~Chest() {
}

Chest	&Chest::operator=(Chest const & ref) {
	this->_type = ref.get_type();
	this->is_open = ref.is_open;
	this->list_keys = ref.list_keys;
	this->number = ref.number;
	return *this;
}

void 	Chest::init(std::string line) {
	std::stringstream	ss(line);
	std::string 		element;
	int 				nbr_keys;

	this->is_open = false;

	ss >> element;
	this->_type = std::stoi(element);
	if (this->_type > 200 || this->_type < 0)
		throw std::exception();
	ss >> element;
	nbr_keys = std::stoi(element);
	while (ss >> element)
		list_keys.push_back(std::stoi(element));
	if (list_keys.size() != nbr_keys)
		throw std::exception();
}

int 	Chest::get_type() const {
	return this->_type;
}