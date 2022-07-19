#ifndef Header_h
#define Header_h
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void init_cube(char cube[][3], int num_rows, int num_cols, int face);
void print_cube(char cube[][3], int num_rows, int num_cols);
char init_board(char board[12][9], int num_rows, int num_cols);
char print_board(char board[12][9], int num_rows, int num_cols);
char place_cube_down(char board[12][9], char cube[][3], int first_row, int second_row, int third_row, int column1, int column2, int column3);
void u_notation(char board[12][9]);
void u_prime_notation(char board[12][9]);
void r_prime_notation(char board[12][9]);
void r_notation(char board[12][9]);
void l_notation(char board[12][9]);
void d_notation(char board[12][9]);
void d_prime_notation(char board[12][9]);
void randomizer(char board[12][9]);
void help(char board[12][9]);


#endif