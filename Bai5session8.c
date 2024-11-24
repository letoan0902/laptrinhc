#include<stdio.h>
int main(){
	int a[3][3]={{0,1,2},{3,4,5},{6,7,8}};
	int i,j,n=0;
	for (j=0;j<3;j++){
		n=n+a[0][j];
	} 
	for (j=0;j<3;j++){
	    n=n+a[2][j];
	} 
	n=n+a[1][0]+a[1][2];
	printf("Tong cac so tren duong bien la: %d",n);
	return 0;
}
 
