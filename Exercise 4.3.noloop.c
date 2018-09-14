//このプログラムはユーザーの入力した三角数を割り出す。
//This program calculates the triangular number asked for by the user.

#include <stdio.h>

int main(void)
{
	//変数は作成。
	//Declares the variables.
	int n, triangularNumber;
	
	//ユーザーの入力を尋ねる。
	//Asks for the user's input.
	printf("Enter which triangular number you want: ");
	scanf("%i", &n);
	
	//三角数を割り出す。
	//Calculates the triangular number.
	triangularNumber = n * (n+1) / 2;
	
	//答えをプリントする。
	//Prints the answer.
	printf("The %ith triangular number is %i.\n", n, triangularNumber);

	return 0;
}