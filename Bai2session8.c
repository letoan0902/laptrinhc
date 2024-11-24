#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int n;
	printf("Nhap phan tu: ");
	scanf("%d",&n);
	int i,dem=0,viTri;
	for (i=0;i<5;i++){
		if (n==a[i]){
			viTri=i+1;
			printf("\nPhan tu da nhap co trong mang\nVi tri trong mang la %d",viTri);
			dem++; 
		} 
	} 
	if (dem==0){
		printf("\nPhan tu da nhap khong co trong mang");
	} 
	
	return 0;
}
