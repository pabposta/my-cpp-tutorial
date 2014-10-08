#include <iostream>

int main() {
	// maximum amount of needle lines (the triangular part of the tree)
	const int MAX_LINES = 10;
	// stem size
	const int STEM_HEIGHT = 3;
	const int STEM_WIDTH = 5;
	// characters to draw the tree
	const char NEEDLE_CHAR = '*';
	const char STEM_CHAR = 'X';
	const char SPACE_CHAR = ' ';
	
	// draw the needles
	for (int i = 0; i < MAX_LINES; i++) {
		int treechars = 2 * i + 1;
		int spaces = MAX_LINES - i - 1;
		
		// draw the spaces in front of each line
		for (int j = 0; j < spaces; j++) {
			std::cout << SPACE_CHAR;
		}
		
		// draw the tree line
		for (int j = 0; j < treechars; j++) {
			std::cout << NEEDLE_CHAR;
		}
		
		std::cout << std::endl;
	}
	
	// draw the stem
	int spaces = MAX_LINES - STEM_WIDTH/2 - 1 ;
	for (int i = 0; i < STEM_HEIGHT; i++) {
		// draw the spaces in front of the stem
		for (int j = 0; j < spaces; j++) {
			std::cout << SPACE_CHAR;
		}
		
		// draw the stem itself
		for (int j = 0; j < STEM_WIDTH; j++) {
			std::cout << STEM_CHAR;
		}
		
		std::cout << std::endl;
	}
}
