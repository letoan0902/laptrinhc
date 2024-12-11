#include <stdio.h>
int ham(int a,int b,int c){
	int i,uoc;
	for(i=1;i<=a;i++){
		if (a%i==0 && b%i==0 && c%i==0){
			uoc=i;
		}
	}
	printf("Uoc lon nhat cua 3 so la: %d",uoc);
	return 0;
}
int main() {
	int a,b,c;
    printf("Nhap so nguyen 1: ");
    scanf("%d",&a);
    printf("Nhap so nguyen 2: ");
    scanf("%d",&b);
    printf("Nhap so nguyen 3: ");
    scanf("%d",&c);
    ham(a,b,c);
    return 0;
}

