#include<stdio.h>
int main (){
	char chuoi[100];
	printf("Nhap vao chuoi: ");
	gets(chuoi);
	int i,dem=0;
	for(i=0;i<strlen(chuoi);i++){
		if(chuoi[i]==' '){
			dem++;
		}
	}
	printf("So tu xuat hien trong chuoi la: %d",dem+1);
	return 0;
} 
