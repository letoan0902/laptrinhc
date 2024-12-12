#include<stdio.h>
int main (){
	char chuoi[1];
	printf("Nhap vao chuoi: ");
	gets(chuoi);
	printf("Chuoi vua nhap la: %s\n",chuoi);
	int a;
	a=strlen(chuoi);
	printf("Do dai cua chuoi la: %d",a);	
	return 0;
} 
