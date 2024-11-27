#include<stdio.h>
int main(){
	int n,a,a1,soLuong,b=0,c;
	a=0;
	a1=1;
	printf("Nhap so: ");
	scanf("%d",&n);
	printf("%d so fibonaci dau tien la: ",n);
	while(1){
		if (soLuong==n){
			break;
		}
		printf("%d ",b);
		b=a+a1;
		soLuong++;
		c=a;
		a=b;
		a1=c;
		
	}
	
	return 0;
}
