#include <stdio.h>
int ham(int x, int y){
	int i;
	int dem=0;
	for(i=2;i<x;i++){
		if (x==2){
			printf("%d la so nguyen to\n",x);
			dem++;
		} else if (x%i==0){
			dem++;
		}
	}
	if (dem==0){
		printf("%d la so nguyen to\n",x);
	} else {
		printf("%d khong phai so nguyen to\n",x);
	}
	dem=0;
	for(i=2;i<y;i++){
		if (y==2){
			printf("%d la so nguyen to\n",y);
			dem++;
		} else if (y%i==0){
			dem++;
		}
	}
	if (dem==0){
		printf("%d la so nguyen to\n",y);
	}else {
		printf("%d khong phai so nguyen to\n",y);
	}
} 
int main() {
	int a,b;
    printf("Nhap so nguyen 1: ");
    scanf("%d",&a);
    printf("Nhap so nguyen 2: ");
    scanf("%d",&b);
    ham(a,b);
    return 0;
}

