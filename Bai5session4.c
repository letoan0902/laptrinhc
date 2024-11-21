#include<stdio.h>
int main(){
	int a1,a2,a3;
	printf("Nhap so thu nhat ");
	scanf("%d",&a1);
	printf("Nhap so thu hai ");
	scanf("%d",&a2);
	printf("Nhap so thu ba ");
	scanf("%d",&a3);
	if ((a2>a3)&&(a3>a1) || (a1>a3)&&(a3>a2)){
		printf("So thu 3 nam giua 2 so");
	} else { 
	printf("So thu 3 khong nam giua 2 so");
	} 
	
return 0;
}
