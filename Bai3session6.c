#include<stdio.h>
int main(){
	int a[5]={3,1,5,7,8};
	int i,dem=0;
	printf("So chan co trong mang la: ");
	for (i=0;i<5;i++){
		if ((a[i]%2)==0) {
			printf("%d ",a[i]);
			dem++;
		}
	}
	if(dem==0){
		printf("0\nTrong mang khong chua so chan");
	}

	return 0;
}
