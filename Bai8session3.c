#include<stdio.h>
int main(){
	int number, reverse, a, b, c, d;
	printf(" Hay nhap so co 4 chu so ");
	scanf("%d",&number);
	a = number / 1000;
	b = number % 1000 / 100;
	c = number % 1000 % 100 / 10;
	d = number % 10;
	reverse = d*1000 + c*100 + b*10 + a; 
	printf(" So nghich dao la %d ", reverse);
	return 0; 
} 
