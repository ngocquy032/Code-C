#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	x = 15; y= 20;

	printf(" gia tri ban dau cua la x = %d va y = %d\n", x, y);
	swap(x, y);
	printf("\nAfter interchanging x = %d, y = %d\n", x, y);
	
	
	return 0;
}
swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}
