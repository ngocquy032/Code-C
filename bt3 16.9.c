#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int a);
int main(int argc, char *argv[]) {
	int a[5];
	int i;
	
	for(i = 0; i<5; i++ ){
		printf("\nnhap cac so %d : ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i<5; i++ ){
		if(check(a[i])==0)
		printf("\n cac so boi cua 50 la : %d", a[i]);
		
	}
	
	

	return 0;
}
int check(int a){
	
	if(a %50 ==0){
	return 0;
	
	}else
	return 1;
	
	
}
