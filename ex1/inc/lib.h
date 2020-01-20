#ifndef LIB_H
#define LIB_H

#include <iostream>
#include <vector>
#include <sstream> 
#include <fstream> 

bool 	make_frame_correct(int **frame,
							int frame_width, int frame_height,
							int pic_width, int pic_height,
							int pic_x, int pic_y);

#endif