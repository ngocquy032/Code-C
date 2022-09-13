#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, sum;
	
	printf("Enter any three number :\n ");
	scanf("%d %d %d", &a, &b, &c);
	sum = tong(a, b, c);
	printf("\nSum = %d", sum);

	
	
	return 0;
}
tong(int x, int y, int z)
{
	int d = x + y + z;
	return(d);
}

