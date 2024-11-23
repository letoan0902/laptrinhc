#include<stdio.h>
int main (){
	int n;
	int i, total;
	printf("Ban hay nhap mot so nguyen duong n ");
	scanf("%d",&n);
	for (i = 1; i <= n ; i) {
		total=total+n;
		--n;
	}
	 printf("Tong cac so tu 1 - n la %d",total);
	return 0; 
} 
