#include<stdio.h>
int main(){
	int number, total, a, b, c, d;
	printf(" Hay nhap so co 4 chu so ");
	scanf("%d",&number);
	a = number / 1000;
	b = number % 1000 / 100;
	c = number % 1000 % 100 / 10;
	d = number % 10;
	total = a + b + c + d; 
	printf(" Tong cua 4 so la %d ", total);
	return 0; 
} 
