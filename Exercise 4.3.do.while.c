//このプログラムは第五十三角数まで第五三角数毎を割り出す。
//This program calculates every 5th triangular number, up to the 50th triangular number.

#include <stdio.h>

int main(void)
{
	//変数は作成。
	//Declares the variables.
	int n, triangularNumber;
	
	//時刻表の見出しをプリントする。
	//Prints the table heading.
	printf("\nTABLE OF EVERY 5TH TRIANGULAR NUMBER\n\n");
	printf(" n 		Sum of 1 to n\n");
	printf("---		-------------\n");
	
	//ループを始める。
	//Initializes the loop.
	n = 5;
	do
	{
		//時刻表をプリントする。
		//Prints the table.
		triangularNumber = n * (n+1) / 2;
		printf(" %2i			%5i\n", n, triangularNumber);
		n += 5;
	}
	while(n<=50);

	return 0;
}