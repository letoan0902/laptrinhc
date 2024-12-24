#include<stdio.h>


int main (){
	FILE *fptr;
	char bt01[50];
	fptr = fopen("bt01.txt","w");
	printf("Nhap thong tin vao chuoi: ");
	fgets(bt01,50,stdin);
	fprintf(fptr,"%s",bt01);
	fclose(fptr);
	return 0;
}

