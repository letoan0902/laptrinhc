#include<stdio.h>
int main(){
	int a=25000,b,c;
	printf("Nhap so phut su dung: ");
	scanf("%d",&b);
	if (b>0&&b<50){
		c=600*b+a;
	} else if(b<201){
		c=600*50+(b-50)*400+a;
	} else if(b<401){
		c=600*50+150*400+(b-200)*200+a;
	} else if (b>400){
		c=600*50+150*400+200*200+(b-400)*100+a;
	} else {
		printf("So phut su dung khong hop le");
	}
	printf ("So tien phai thanh toan la: %d",c);
	return 0;
}
