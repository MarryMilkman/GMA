#include "lib.h"
#include "Dollar.hpp"

int main(int argc, char const *argv[])
{
	std::string 	input_data;

	while (1) {
		getline(std::cin, input_data);
		if (input_data == "exit")
			return 0;
		try {
			std::cerr << Dollar(input_data).convert_to_words() << "\n";
		} catch (std::exception &e) {
			std::cerr << "invalid parametr\n";
		}
	}
	return 0;
}