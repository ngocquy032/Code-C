#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float getArea( int a, int b, int c);

int main(int argc, char *argv[]) {
	int a, b, c;
	float s;
	printf("\ncanh a : ");
	scanf("%d", &a);
	
	printf("\ncanh b : ");
	scanf("%d", &b);
	
	printf("\ncanh c : ");
	scanf("%d", &c);
	s = (float)getArea(a, b, c);
	
	if(a+b>c && a+c>b && c+b>a){
		printf("dien tich tam giac la : %f ",(float)s);
		
	}else
	   printf(" sai cach nhap");
	

	return 0;
}
float getArea(int a, int b, int c){
	float d, p;
	p = (a + b +c )/2;
	
	d = (float)sqrt(p*(p - a)*(p -b)*(p - c));
	return d;
 

	
}
