#include<stdio.h>


int main (){
	FILE *fptr;
	char bt01[50];
	fptr = fopen("bt01.txt","r");
	printf("Thong tin co trong chuoi la: ");
	char c = fgetc(fptr);
	printf("%c",c);
	fclose(fptr);
	return 0;
}

