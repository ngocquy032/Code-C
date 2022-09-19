#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum_arr(int num_arr[]);
int main(int argc, char *argv[]) {
	int num[5], ctr, sum=0;
	
	for(ctr =0; ctr <5; ctr++){
		printf("\nEnter number %d : ", ctr+1);
		scanf("%d", &num[ctr]);
		
	}
	sum = sum_arr(num);
	printf("\nThe sum of the array is %d", sum);
	return 0;
}
int sum_arr(int num_arr[]){
	int i, total;
	for(i=0, total=0; i<5; i++)
		total += num_arr[i];
	return total;	
}
