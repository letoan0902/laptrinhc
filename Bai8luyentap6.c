#include<stdio.h>
int main(){
	float a,a1,b,c,d;
	printf("Nhap so tien ban dau: ");
	scanf("%f",&a);
	printf("Nhap lai suat thang: ");
	scanf("%f",&b);
	printf("Nhap so thang gui: ");
	scanf("%f",&c);
	a1=a; 
	int i;
	for (i=1;i<=c;i++){
	
	    d = a*(b/100);
	    a=a+d;
	}
	printf("\nTien lai: %f",(a-a1));
	printf("\nTien nhan duoc: %f",a);
	

	return 0;
}
