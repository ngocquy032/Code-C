#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char hotelname1[15]="sea view";
	char hotelname2[15]="sea breeze";
	printf("The old name is: %s\n", hotelname1);
	
	strcpy(hotelname1, hotelname2);
	printf("The new name is: %s\n", hotelname1);
	
	
	return 0;
}
