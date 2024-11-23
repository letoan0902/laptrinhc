#include<stdio.h>
int main(){
	int so1,tachSo;
	printf("Hay nhap so nguyen: ");
	scanf("%d",&so1);
	printf("\nCac chu so trong so da nhap la: ");
	if (so1<0){
		so1=(-1)*so1;
	}
	while(so1>0){
		tachSo=so1%10;
		so1=so1/10;
		printf("%d ",tachSo);
	}
	
	
	return 0;
}
