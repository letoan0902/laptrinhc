#include<stdio.h>

void ham(int *a,int *b){
	int sum;
	sum=*a+*b;
    printf("Tong 2 so a va b sau la: %d",sum);
	}
int main (){
	int a = 10;
	int b = 20;
	printf("Tong 2 so a va b ban dau la: 30\n");
	ham(&a, &b);
	return 0;
} 
