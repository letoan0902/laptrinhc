#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,n=0;
	for (i=0;i<2;i++){
		printf ("%d ",a[(i+1)][i]);
		n=n+a[i+1][(i)];
		printf ("%d ",a[i][(i+1)]);		
		n=n+a[i][(i+1)];
	}
	printf("\nTong cac phan tu phu cheo la: %d",n);
	return 0;
}
