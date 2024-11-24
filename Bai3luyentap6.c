#include<stdio.h>
int main(){
	int a=12345678,b;
	printf("Hay nhap mat khau (8 so): ");
	scanf("%d",&b);
	if(b==a){
		printf("Ban da nhap dung");
	} else {
		printf("Ban da nhap sai");
	}
		
	return 0;
}
