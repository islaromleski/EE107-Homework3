//このプログラムは一まで十掛ける一まで十を割り出す。
//This program calculates the square of the numbers one through ten.
#include <stdio.h>

int main(void)
{
	//変数を作成。
	//Declares the variables.
	int n, n_squared;
	
	//時刻表の見出しをプリントする。
	//Prints the table heading.
	printf("\nTABLE OF POWERS OF TWO\n\n");
	printf(" n 		2 to the n\n");
	printf("---		----------\n");

	//ループを始める。
	//Initializes the loop.	
	for(n=1; n<=10; ++n)
	{
		//時刻表をプリントする。
		//Prints the table.
		n_squared = n * n;
		printf("%3i		   %3i\n", n, n_squared);
	}
	
	return 0;
}