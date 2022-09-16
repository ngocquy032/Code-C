#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int chuvi(int a, int b);
	int dientich(int a, int b);
int main(int argc, char *argv[]) {
	int kqua;
	int a, b;
	printf("\nchieu dai :");
	scanf("%d",&a);
	printf("\nchieu rong :");
	scanf("%d", &b);
	
	kqua = chuvi(a, b);
	printf("\nchu vi hcn la : %d ", kqua);
	
	kqua = dientich(a, b);
	printf("\ndien tich hcn la : %d ", kqua);
	
	

	return 0;
}
int chuvi(int a, int b){
	int c;
	c = (a+b)*2;
	return c;
}
int dientich(int a, int b){
	int d;
	d = a*b;
	return d;
}
