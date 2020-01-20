#include "lib.h"
#include "TreasureHunter.hpp"

int main(int argc, char const *argv[])
{
	TreasureHunter	hunter;

	if (argc != 2)
		std::cerr << "need path to map\n";
	hunter.read_map(argv[1]);
	std::cerr << hunter.get_search_plan();
	return 0;
}