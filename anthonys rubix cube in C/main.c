#include "Header.h"



int main(void) {

	//cube var
	char cube[3][3] = { " " };
	char board[12][9] = { " " };
	int red = 114;
	int white = 119;
	int orange = 111;
	int yellow = 121;
	int blue = 98;
	int green = 103;

	printf("-------\n");
	printf("rubix cube\n");
	printf("-------\n");
	printf("the cube is sitting flat on your table with white facing up, blue is to your right\n\n");


	init_board(board, 12, 9); // initilzes the board
	
	init_cube(cube, 3, 3, orange); // sets the 3x3 rubix cube to the color orange
	place_cube_down(board, cube, 0, 1, 2, 3, 4, 5); // places the orange cube down on those cords. the first three numbers are rows, second are columns
	init_cube(cube, 3, 3, white);// sets the 3x3 rubix cube to the color white
	place_cube_down(board, cube, 3, 4, 5, 3, 4, 5);// places the white cube down on those cords. the first three numbers are rows, second are columns
	init_cube(cube, 3, 3, red);// sets the 3x3 rubix cube to the color red
	place_cube_down(board, cube, 6, 7, 8, 3, 4, 5);// places the red cube down on those cords. the first three numbers are rows, second are columns
	init_cube(cube, 3, 3, yellow);// sets the 3x3 rubix cube to the color yellow
	place_cube_down(board, cube, 9, 10, 11, 3, 4, 5);// places the yellow cube down on those cords. the first three numbers are rows, second are columns
	init_cube(cube, 3, 3, green);// sets the 3x3 rubix cube to the color green
	place_cube_down(board, cube, 3, 4, 5, 0, 1, 2);// places the green cube down on those cords. the first three numbers are rows, second are columns
	init_cube(cube, 3, 3, blue);// sets the 3x3 rubix cube to the color blue
	place_cube_down(board, cube, 3, 4, 5, 6, 7, 8);// places the blue cube down on those cords. the first three numbers are rows, second are columns


	print_board(board, 12, 9); // prints the final board



	return 0;

}//main