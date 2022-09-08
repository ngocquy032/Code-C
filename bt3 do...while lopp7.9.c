#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cnt, num;
	cnt = 0;
	do{
		
		printf("\n Enter number:\t");
		scanf("%d", &num);
		printf("No.is %d", num);
		cnt++;	
	} while(num != 0);
	printf("\n The total number entered were %d", --cnt);
	
	
	
	return 0;
}
