#include<stdio.h>


int main (){
	FILE *fptr;
	char bt01[50];
	fptr = fopen("bt01.txt","r");
	printf("Thong tin dong 1 co trong chuoi la: ");
	fgets(bt01,50,fptr);
	printf("%s",bt01);
	fclose(fptr);
	return 0;
}

