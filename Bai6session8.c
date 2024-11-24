#include<stdio.h>
int main(){
	int a[3][3]={{0,1,2},{3,4,5},{6,7,8}};
	int i,n=0;
	for (i=0;i<3;i++){
		printf ("%d ",a[i][i]);
		n=n+a[i][i];
	}
	printf("\nTong cac phan tu cheo la: %d",n);
	return 0;
}
