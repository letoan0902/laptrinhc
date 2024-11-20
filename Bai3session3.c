#include<stdio.h>
int main (){

	float pi=3.14;
	float r;
	printf("Nhap ban kinh hinh tron ");
	scanf("%f", &r);
	// chu vi
	float perimeter = 2*pi*r;
	// dien tich
	float area = pi*r*r;
	printf("Chu vi %.2f \nDien tich %.2f", perimeter, area);
	return 0;
}
