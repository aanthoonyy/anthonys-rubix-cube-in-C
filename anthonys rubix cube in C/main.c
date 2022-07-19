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
	printf("\n");
	printf("\n");
	printf("\n");
	system("cls");
	printf("Randomizing the cube");
	printf("\n");
	printf("\n");

	for (int i = 0; i < 20; i++) {
		switch (rand() % 9) {
		case 0: u_prime_notation(board, 12, 9); break;
		case 1: u_notation(board, 12, 9); break;
		case 3: r_prime_notation(board, 12, 9); break;
		case 4: r_notation(board, 12, 9); break;
		case 5: l_prime_notation(board, 12, 9); break;
		case 6: l_notation(board, 12, 9); break;
		case 7: d_notation(board, 12, 9); break;
		case 8: d_prime_notation(board, 12, 9); break;
		}
	}

	print_board(board, 12, 9);

	
	printf("\n");
	printf("\n");







	int cube_notation = 0;
	printf("enter a number for the notation you'd like to do?\n");
	printf("---------------------------------------------\n");
	printf("1. u	2. u'	3. r	4. r'\n");
	printf("5. l	6. l'	7. d	8. d'\n");
	printf("notation: ");
	scanf("%d", cube_notation);




	//char move[1] = {" "};
	//char p = " ";

	//scanf(" %d%d", &move);
	//p = strchr(move, "\'");
	//while (p == "\'")
	//{
	//	printf("%c", move);
	//}
	//move == 'R\0' ? printf("it works") : printf("doesnt work");
	//

	return 0;

}//main