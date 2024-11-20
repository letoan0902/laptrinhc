#include<stdio.h>
int main(){
	float sideLength, height, area;
	printf("Moi nhap do dai canh cua tam giac ");
	scanf("%f",&sideLength );
	printf("\n Moi nhap chieu cao cua tam giac ");
	scanf("%f",&height );
	area = sideLength * height / 2;
	printf("\nDien tich cua tam giac la %.2f", area);
	return 0; 
} 
