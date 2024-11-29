#include<stdio.h>
int main(){
	int a[100];
	int b,c,nho,i,n,m,dem;
	printf("Hay nhap so phan tu muon them: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("Phan tu thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Mang hien tai la: ");
	for (i=0;i<m;i++){
	printf("%d",a[i]);
	}
	printf("\nNhap vi tri can sua: ");
	scanf("%d",&b);
	printf("Nhap gia tri sau khi sua: ");
	scanf("%d",&c);	
	b=b-1;
	a[b]=c;
	printf("Mang sau khi sua la: ");
	for (i=0;i<m;i++){
		printf("%d",a[i]);
	}
	return 0;
} 
