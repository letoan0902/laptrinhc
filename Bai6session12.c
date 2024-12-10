#include <stdio.h>
int ham(int a){
	int tong=0,i;
	for (i=1;i<a;i++){
		if(a%i==0){
			tong = tong + i;
		}
	}
	if(tong==i){
		printf("So %d la so hoan hao\n",a);
	} else {
		printf("So %d khong phai so hoan hao\n",a);
	}
	return 0;
}
int main() {
	int a,b,c;
    printf("Nhap so nguyen 1: ");
    scanf("%d",&a);
    ham(a);
    printf("Nhap so nguyen 2: ");
    scanf("%d",&b);
    ham(b);
    return 0;
}

