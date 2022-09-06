#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid, pass, nhap, sodu = 1000;
	int rut;
	int chonnganhang, stk;
	char teNNguoiDung = 'A';
	
	printf("\ncardid : ");
	scanf("%d", &cardid);
	printf("\npass : ");
	scanf("%d", &pass);
	
	if (cardid == 01 && pass == 02)
	{
		
		printf("\nMenu :");
		printf("\n1Rut tien");
		printf("\n2Chuyen khoan");
		printf("\n3Xem so du");
		printf("\n4Ket thuc");
		printf("\n chon cac so : ");
		scanf("%d",&nhap);
		
	    system("cls");
		
		switch (nhap)
		{
			case 1:
				printf("\nRut tien:");
				printf("\nSo tien muon rut:");
				scanf("%d", &rut);
			    if (rut <= sodu){
			    	sodu -= rut;
			    	printf("\nDarut : %d", rut);
			    	printf("\nSo du con : %d", sodu);
			    	printf("\nBan da rut thanh cong");
				}else
				    printf("\nSo du khong du");    
				    
				
				break;
			case 2:
				printf("\nchuyen khoan : ");
				printf("\nHay chon ngan hang huong thu : ");
				printf("\n1Mbbank");
				printf("\n2Techcombank");
				printf("\n3Agribank");
				printf("\nNgan hang ban chon:");
				scanf("%d", &chonnganhang);
				
				system("cls");
				
				
				if (chonnganhang == 1){
				
					printf("\nMbbank");
				} else if (chonnganhang == 2){
					printf("\nTechcombank");
				} else if (chonnganhang == 3){
					printf("\nAgribank");
				}else{
					printf("kh hop le");
				}
				
				
				if (chonnganhang == 1 || chonnganhang == 2 || chonnganhang == 3) {
				 printf("ten nguoi dung : %c", teNNguoiDung);
                  printf("\nNhap stk : ");
                  scanf("%d", &stk);
                  
                }  
                    

				
				
			
				
				
				
				break;
			case 3:
				printf("\nXem so du:");
				
				system("cls");
				
				printf("\nSo du cua ban la : %d", sodu);
				
				break;
			case 4:
				break;
			default :
				printf("\nsai lua chon");
				break;
		}
		
	} else 
   printf("\nsai mat khau");

	
	
	
	return 0;
}
