#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, res;
	char op;
	num1 = 90;
	num2 = 33;
	op = '-';

	
	switch(op)
	{
		case '+':
			res = num1 + num2;
			printf("\n Number after Subtraction: %d", res);
			break;
		case '/':
			res = num1 / num2;
			printf("\n Number after Division: %d", res);
			break;
		case '*':
			res = num1 * num2;
			printf("\n Number after multiplication: %d", res);
		default:
		printf("\n Invalid");
		break;	
	}
	
	return 0;
}
