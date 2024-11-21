#include<stdio.h>
int main(){
	printf("Hay nhap vao mot so nguyen duoi 4 chu so ");
	int n,a,b,c,d,total;
	scanf("%d",&n);
	// tach so
	a = n / 1000;
	b = n % 1000 / 100;
	c = n % 1000 % 100 / 10;
	d = n % 10;
	total = a+b+c+d;
    // dieu kien
	if (total % 3 == 0 && n % 5 == 0) {
		printf("So nhap vao chia het cho ca 3 va 5");
		 
	} else if(total%3==0) {
		printf("So nhap vao chia het cho 3");
	} else if(n%5==0) {
		printf("So nhap vao chia het cho 5");
	} else {
	    printf("So nhap vao khong chia het cho so nao ca");
	}
	return 0; 
} 
