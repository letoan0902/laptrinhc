#include<stdio.h>
int main(){
	int soPhanTu;
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",&soPhanTu);;
	int a[1000];
	int i;
	for (i=0;i<soPhanTu;i++){
		printf("\nHay nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nSo nguyen to co trong mang la: ");
	int n,dem=0;
	for (i=0;i<soPhanTu;i++) {
		n=2;
		dem=0;
		if (a[i]==1||a[i]==2) {
			continue;
		}
		while ( n<a[i] ) {
			if ((a[i]%n)==0){
				dem++;
				break; 
			}
			n++;
	    } 
		if(dem==0){
				printf("%d ",a[i]);
			} 
	}
	return 0;
}

