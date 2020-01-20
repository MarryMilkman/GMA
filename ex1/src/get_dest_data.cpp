#include "lib.h"

static bool	s_is_data_valid(int **frame,
							int frame_width, int frame_height,
							int pic_width, int pic_height,
							int pic_x, int pic_y)
{
	int 	**check_frame = frame;
	int 	*check_line = 0;

	if (!check_frame || frame_width < 0 || frame_height < 0 ||
			pic_height < 0 || pic_width < 0 || pic_x < 0 || pic_y < 0) {
		std::cerr << "1 false\n";		
		return false;
	}
	if (frame_height < pic_y + pic_height || frame_width < pic_x + pic_width)
		return false;
	return true;
}

static void	s_copy_valuable_data(int **frame,
							int pic_width, int pic_height,
							int pic_x, int pic_y)
{
	int x;
	int	y = pic_y;
	int max_x = pic_width + pic_x;
	int max_y = pic_height + pic_y;

	// std::cerr << pic_width << "\n" << pic_height << "\n";
	// std::cerr << pic_y << "\n" << pic_x << "\n";
	if (!pic_x && !pic_y)
		return;
	while (y < max_y) {
		int	curr_cp_y = y - pic_y;

		x = pic_x;
		while (x < max_x) {
			std::cerr << frame[curr_cp_y][x - pic_x] << "\n";
			frame[curr_cp_y][x - pic_x] = frame[y][x];
			frame[y][x] = 42;
			x++;
		}
		y++;
	}
}

bool 	make_frame_correct(int **frame,
							int frame_width, int frame_height,
							int pic_width, int pic_height,
							int pic_x, int pic_y)
{
	bool is_data_valid = false;

	is_data_valid = s_is_data_valid(frame,
							frame_width, frame_height,
							pic_width, pic_height,
							pic_x, pic_y);
	if (!is_data_valid) {
		std::cerr << "Not valid data\n";
		return false;
	}
	s_copy_valuable_data(frame, pic_width, pic_height, pic_x, pic_y);
	return true;
}