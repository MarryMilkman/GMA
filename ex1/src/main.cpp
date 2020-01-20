#include "lib.h"

static int	s_get_input_nbr(std::string frace) {
	int			nbr;
	std::string	input_data;

	std::cerr << "Enter " << frace << ":\n";
	while (1) {
		getline(std::cin, input_data);
		try {
			nbr = std::stoi(input_data);
		} catch (std::exception &e) {
			std::cerr << "false data\n";
			continue;
		}
		return nbr;
	}
}

static void	s_init_param(
	std::string	&path_to_frame,
	int 		&frame_width,
	int 		&frame_height,
	int 		&pic_width,
	int 		&pic_height,
	int 		&pic_x,
	int 		&pic_y)
{
	std::string	input_data;

	std::cerr << "Enter path to frame:\n";
	getline(std::cin, input_data);
	path_to_frame = input_data;

	frame_width = s_get_input_nbr("frame_width");
	frame_height = s_get_input_nbr("frame_height");
	pic_width = s_get_input_nbr("pic_width");
	pic_height = s_get_input_nbr("pic_height");
	pic_x = s_get_input_nbr("pic_x");
	pic_y = s_get_input_nbr("pic_y");
}

static int	**s_get_frame(std::string path_to_frame) {
	std::fstream		file(path_to_frame);
	std::string			line;
	std::vector<int *>	list_lines;
	int					**frame = 0;

	while (getline(file, line)) {
		int 				*arr = 0;
		std::vector<int>	list_nbr;
		std::string 		word;
		std::stringstream	ss(line);

		while (ss >> word) {
			try {
				list_nbr.push_back(std::stoi(word));
			} catch (std::exception & e){
				std::cerr << "invalid file\n";
				return 0;
			}
		}
		arr = new int[list_nbr.size() + 1];
		for(int i = 0, size = list_nbr.size(); i < size; i++)
			arr[i] = list_nbr[i];
		list_lines.push_back(arr);
	}
	frame = new int *[list_lines.size()];
	for(int i = 0, size = list_lines.size(); i < size; i++)
		frame[i] = list_lines[i];
	return frame;
}

int main(int argc, char const *argv[])
{
	int 		**frame;
	int 		frame_width;
	int 		frame_height;
	int 		pic_width;
	int 		pic_height;
	int 		pic_x;
	int 		pic_y;
	std::string	path_to_frame;

	s_init_param(path_to_frame, frame_width, frame_height,
					pic_width, pic_height,
					pic_x, pic_y);
	frame = s_get_frame(path_to_frame);
	make_frame_correct(frame, frame_width, frame_height,
					pic_width, pic_height,
					pic_x, pic_y);

	int 	y = 0;

	while (y < frame_height) {
		int 	x = 0;
	
		while (x < frame_width) {
			std::cerr << std::to_string(frame[y][x]) << " ";
			x++;
		}
		std::cerr << "\n";
		y++;
	}
	return 0;
}