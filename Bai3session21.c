#include<stdio.h>

int main (){
	FILE *fptr;
	char bt01[50];
	fptr = fopen("bt01.txt","a");
	printf("Nhap thong tin them vao chuoi: ");
	fgets(bt01,50,stdin);
	fprintf(fptr,"%s",bt01);
	fclose(fptr);
	return 0;
}

