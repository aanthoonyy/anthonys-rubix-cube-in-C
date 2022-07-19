#include "header.h"



// intilizes the 3x3 cube
void init_cube(char cube[][3], int num_rows, int num_cols, int face)
{
	int row_index = 0, col_index = 0;
	// initlizes the 3x3 cube for the face
	for (; row_index < num_rows; ++row_index) // traversing the rows
	{
		for (col_index = 0; col_index < num_cols; ++col_index) // traversing the cols
		{
			cube[row_index][col_index] = face;
		}
	}
			//sets the middle face
			face = toupper(face);
			cube[1][1] = face;
			
}
//prints cube
void print_cube(char cube[][3], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;
	for (; row_index < num_rows; ++row_index) // traversing the rows
	{
		for (col_index = 0; col_index < num_cols; ++col_index) // traversing the cols
		{
			printf("%-c", cube[row_index][col_index]);

		}
			putchar('\n');
		
	}
	printf("---\n---\n---");
}
// sets the game board to "-"
char init_board(char board[12][9], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;
	// initlizes the 9x9 cube for the face
	for (; row_index < num_rows; ++row_index) // traversing the rows
	{
		for (col_index = 0; col_index < num_cols; ++col_index) // traversing the cols
		{
			board[row_index][col_index] = 45;
		}
	}
}

// displays board
char print_board(char board[12][9], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;

	//printf("%3d%2d%2d%2d%2d%2d%2d%2d%2d%2d\n", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);

	for (; row_index < num_rows; ++row_index) // traversing the rows
	{
		//printf("%-2d", row_index);
		for (col_index = 0; col_index < num_cols; ++col_index) // traversing the cols
		{
			printf("%-2c", board[row_index][col_index]);
		}

		putchar('\n');
	}
}
// places cube down
char place_cube_down(char board[12][9], char cube[][3], int first_row, int second_row, int third_row, int column1, int column2, int column3) {
	//first row
	board[first_row][column1] = cube[0][0];
	board[first_row][column2] = cube[0][1];
	board[first_row][column3] = cube[0][2];
	//second row
	board[second_row][column1] = cube[1][0];
	board[second_row][column2] = cube[1][1];
	board[second_row][column3] = cube[1][2];
	//third row
	board[third_row][column1] = cube[2][0];
	board[third_row][column2] = cube[2][1];
	board[third_row][column3] = cube[2][2];
}
//notations
//
//U's
void u_prime_notation(char board[12][9])
{
	char temp[20][20] = {"-"};
	// getting all positions to temp variable

	 temp[0][0] = board[3][2]; 
	 temp[1][1] = board[4][2];
	 temp[2][2] = board[5][2];

	 temp[3][3] = board[6][5];
	 temp[4][4] = board[6][4];
	 temp[5][5] = board[6][3];

	 temp[6][6] = board[3][6];
	 temp[7][7] = board[4][6];
	 temp[8][8] = board[5][6];

	 temp[9][9] = board[2][5];
	 temp[10][10] = board[2][4];
	 temp[11][11] = board[2][3];

	// setting all temp variables to their counter clockwise counter part

	 board[6][5] = temp[0][0];
	 board[6][4] = temp[1][1];
	 board[6][3] = temp[2][2];

	 board[3][6] = temp[3][3];
	 board[4][6] = temp[4][4];
	 board[5][6] = temp[5][5];

	 board[2][5] = temp[6][6];
	 board[2][4] = temp[7][7];
	 board[2][3] = temp[8][8];

	 board[3][2] = temp[9][9];
	 board[4][2] = temp[10][10];
	 board[5][2] = temp[11][11];

}

void u_notation(char board[12][9])
{
	char temp[20][20] = { "-" };
	// getting all positions to temp variable

	temp[0][0] = board[3][2];
	temp[1][1] = board[4][2];
	temp[2][2] = board[5][2];

	temp[3][3] = board[6][5];
	temp[4][4] = board[6][4];
	temp[5][5] = board[6][3];

	temp[6][6] = board[3][6];
	temp[7][7] = board[4][6];
	temp[8][8] = board[5][6];

	temp[9][9] = board[2][5];
	temp[10][10] = board[2][4];
	temp[11][11] = board[2][3];

	// setting all temp variables to their  clockwise counter part

	board[6][5] = temp[6][6];
	board[6][4] = temp[7][7];
	board[6][3] = temp[8][8];

	board[3][6] = temp[9][9];
	board[4][6] = temp[10][10];
	board[5][6] = temp[11][11];

	board[2][5] = temp[0][0];
	board[2][4] = temp[1][1];
	board[2][3] = temp[2][2];

	board[3][2] = temp[3][3];
	board[4][2] = temp[4][4];
	board[5][2] = temp[5][5];

}
//R's
void r_prime_notation(char board[12][9]) {
	char temp[20][20] = { "-" };

	temp[0][0] = board[11][5];
	temp[1][1] = board[10][5];
	temp[2][2] = board[9][5];

	temp[3][3] = board[8][5];
	temp[4][4] = board[7][5];
	temp[5][5] = board[6][5];

	temp[6][6] = board[5][5];
	temp[7][7] = board[4][5];
	temp[8][8] = board[3][5];

	temp[9][9] = board[2][5];
	temp[10][10] = board[1][5];
	temp[11][11] = board[0][5];

	// setting all temp variables to their clockwise counter part

	board[11][5] = temp[11][11];
	board[10][5] = temp[10][10];
	board[9][5] = temp[9][9];

	board[8][5] = temp[8][8];
	board[7][5] = temp[7][7];
	board[6][5] = temp[6][6];

	board[5][5] = temp[5][5];
	board[4][5] = temp[4][4];
	board[3][5] = temp[3][3];

	board[2][5] = temp[2][2];
	board[1][5] = temp[1][1];
	board[0][5] = temp[0][0];

}

void r_notation(char board[12][9]) {
	char temp[20][20] = { "-" };
	//yellow
	temp[0][0] = board[11][5];
	temp[1][1] = board[10][5];
	temp[2][2] = board[9][5];
	//red
	temp[3][3] = board[8][5];
	temp[4][4] = board[7][5];
	temp[5][5] = board[6][5];
	//white
	temp[6][6] = board[5][5];
	temp[7][7] = board[4][5];
	temp[8][8] = board[3][5];
	//orange
	temp[9][9] = board[2][5];
	temp[10][10] = board[1][5];
	temp[11][11] = board[0][5];

	// setting all temp variables to their clockwise counter part
	//yellow
	board[11][5] = temp[11][11];
	board[10][5] = temp[10][10];
	board[9][5] = temp[9][9];
	//red
	board[8][5] = temp[2][2];
	board[7][5] = temp[1][1];
	board[6][5] = temp[0][0];
	//white
	board[5][5] = temp[5][5];
	board[4][5] = temp[4][4];
	board[3][5] = temp[3][3];
	//orange
	board[2][5] = temp[8][8];
	board[1][5] = temp[7][7];
	board[0][5] = temp[6][6];

}

//L's
void l_prime_notation(char board[12][9]) {
	char temp[20][20] = { "-" };
	//yellow
	temp[0][0] = board[11][3];
	temp[1][1] = board[10][3];
	temp[2][2] = board[9][3];
	//red
	temp[3][3] = board[8][3];
	temp[4][4] = board[7][3];
	temp[5][5] = board[6][3];
	//white
	temp[6][6] = board[5][3];
	temp[7][7] = board[4][3];
	temp[8][8] = board[3][3];
	//orange
	temp[9][9] = board[2][3];
	temp[10][10] = board[1][3];
	temp[11][11] = board[0][3];

	// setting all temp variables to their clockwise counter part
	//yellow
	board[11][3] = temp[11][11];
	board[10][3] = temp[10][10];
	board[9][3] = temp[9][9];
	//red
	board[8][3] = temp[2][2];
	board[7][3] = temp[1][1];
	board[6][3] = temp[0][0];
	//white
	board[5][3] = temp[5][5];
	board[4][3] = temp[4][4];
	board[3][3] = temp[3][3];
	//orange
	board[2][3] = temp[8][8];
	board[1][3] = temp[7][7];
	board[0][3] = temp[6][6];

}

void l_notation(char board[12][9]) {
	char temp[20][20] = { "-" };

	temp[0][0] = board[11][3];
	temp[1][1] = board[10][3];
	temp[2][2] = board[9][3];

	temp[3][3] = board[8][3];
	temp[4][4] = board[7][3];
	temp[5][5] = board[6][3];

	temp[6][6] = board[5][3];
	temp[7][7] = board[4][3];
	temp[8][8] = board[3][3];

	temp[9][9] = board[2][3];
	temp[10][10] = board[1][3];
	temp[11][11] = board[0][3];

	// setting all temp variables to their clockwise counter part

	board[11][3] = temp[11][11];
	board[10][3] = temp[10][10];
	board[9][3] = temp[9][9];

	board[8][3] = temp[8][8];
	board[7][3] = temp[7][7];
	board[6][3] = temp[6][6];

	board[5][3] = temp[5][5];
	board[4][3] = temp[4][4];
	board[3][3] = temp[3][3];

	board[2][3] = temp[2][2];
	board[1][3] = temp[1][1];
	board[0][3] = temp[0][0];

}

// D's
void d_notation(char board[12][9]) {
	char temp[20][20] = { "-" };
	//o
	temp[0][0] = board[0][3];
	temp[1][1] = board[0][4];
	temp[2][2] = board[0][5];
	//b
	temp[3][3] = board[3][8];
	temp[4][4] = board[4][8];
	temp[5][5] = board[5][8];
	//r
	temp[6][6] = board[8][3];
	temp[7][7] = board[8][4];
	temp[8][8] = board[8][5];
	//g
	temp[9][9] = board[3][0];
	temp[10][10] = board[4][0];
	temp[11][11] = board[5][0];

	// setting all temp variables to their clockwise counter part
	// orange to the green
	board[3][0] = temp[0][0];
	board[4][0] = temp[1][1];
	board[5][0] = temp[2][2];
	//green to red
	board[8][3] = temp[9][9];
	board[8][4] = temp[10][10];
	board[8][5] = temp[11][11];
	//red to the blue
	board[3][8] = temp[6][6];
	board[4][8] = temp[7][7];
	board[5][8] = temp[8][8];
	//blue to orange
	board[0][3] = temp[3][3];
	board[0][4] = temp[4][4];
	board[0][5] = temp[5][5];

}

void d_prime_notation(char board[12][9]) {
	char temp[20][20] = { "-" };
	//o
	temp[0][0] = board[0][3];
	temp[1][1] = board[0][4];
	temp[2][2] = board[0][5];
	//b
	temp[3][3] = board[3][8];
	temp[4][4] = board[4][8];
	temp[5][5] = board[5][8];
	//r
	temp[6][6] = board[8][3];
	temp[7][7] = board[8][4];
	temp[8][8] = board[8][5];
	//g
	temp[9][9] = board[3][0];
	temp[10][10] = board[4][0];
	temp[11][11] = board[5][0];

	// setting all temp variables to their clockwise counter part
	
	board[3][8] = temp[0][0];
	board[4][8] = temp[1][1];
	board[5][8] = temp[2][2];
	
	board[8][3] = temp[3][3];
	board[8][4] = temp[4][4];
	board[8][5] = temp[5][5];
	
	board[3][0] = temp[6][6];
	board[4][0] = temp[7][7];
	board[5][0] = temp[8][8];

	board[0][3] = temp[11][11];
	board[0][4] = temp[10][10];
	board[0][5] = temp[9][9];

}

//randomizer
void randomizer(char board[12][9]) {



}

// HElP
void help(char board[12][9]){

	// 1. make daisy 
	// 2. make white cross
	// 3. solve the first layer
	// 4. solve middle layer
	// 5. create the yellow cross
	// 6. solve the yellow face
	// 7. solve the third face

	


	}