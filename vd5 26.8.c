#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 5, b = 6, c =7;
	printf("cac gia tri abc lan luot la: %d , %d , %d\n\n", a, b, c);
	
	printf("neu a > b thi \t%i\n\n", a > b);
	printf("neu b < c thi \t%i\n\n", b < c);
	printf("neu a + b >= c thi \t%i\n\n", a + b >= c);
	printf("neu a - b <= b - c thi \t%i\n\n", a - b <= b - c);
	
	printf("neu b - a == b - c thi \t%i\n\n", b - a == b - c);
	printf("neu a * b != c * c thi \t%i\n\n", a * b != c * c );
	printf("ket qua cua a>10 && b<5 = %d\n\n", a>10 && b<5);
	printf(" ket qua cua a > 100 || b < 50 = %d\n\n", a>100 || b<50);
	
	return 0;
}
