#include<stdio.h>


int main (){
	FILE *fptr;
	char bt01[50];
	int soDong;
	fptr = fopen("bt05.txt","w");
	printf("Nhap so dong: ");
	scanf("%d",&soDong);
	int i;
	fflush(stdin); 
	for (i=0;i<soDong;i++){
	printf("\nNhap thong tin dong %d: ",i+1);
	fgets(bt01,50,stdin);
	fprintf(fptr,"%s",bt01);	
	}
	fclose(fptr);
	fptr = fopen("bt05.txt","r");
	for(i=0;i<soDong;i++){
	printf("Thong tin dong %d co trong chuoi la: ",i+1);
	fgets(bt01, 50, fptr);
	printf("%s",bt01);	
	}
	fclose(fptr);	
	return 0;
}

