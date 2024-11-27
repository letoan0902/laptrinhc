#include<stdio.h>
int main(){
	int a,dem=0;
	printf("Nhap so: ");
	scanf("%d",&a);
	int i;
	for (i=2;i<a;i++){
		if (a%i==0){
			dem++;
		}
	} 
	if (a<2){
		printf("So ban nhap khong phai so nguyen to");
	} else if (dem==0){
		printf("So ban nhap la so nguyen to");
	} else {
		printf("So ban nhap khong phai so nguyen to");
	}
	return 0;
}
