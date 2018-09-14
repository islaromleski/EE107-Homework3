//このプログラムはユーザーの入力した数の番号を足し算できる。
//This program sums the digits of a number inputted by the user.

#include <stdio.h>

int main(void)
{
	//変数は作成。
	//Declares the variables.
	int input, right_digit, temp;
	
	//ユーザーの入力を尋ねる。
	//Asks for the user's input.
	printf("Type the number whose digits you want to be summed: ");
	scanf("%i", &input);
	
	//数の番号を足し算する。
	//Sums the digits of the number.
	printf("The sum of the digits of %i is ", input);
	
		for(temp=0; input!=0; input/=10)
		{
			right_digit = input % 10;
			temp += right_digit;
		}

	//結果をプリントする。
	//Prints the result.
	printf("%i.\n", temp);
	
	return 0;
}