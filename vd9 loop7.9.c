#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	char i, ans;
	i ='a';
	
	do{
	
		x = 0;
		ans = 'y';
		printf("\nEnter sequence of chrater");
		do{
			i = getchar();
			x++;
			
		}while(i !=  '\n');
		i = 'a';
		printf("\nNumber of character enter is: %d", --x);
		printf("\nMore sequences (Y/N) ?");
		ans = getchar();
	}while(ans == 'Y' || ans == 'y');
	
	
	
	return 0;
}
