#include<stdio.h>
int main(){
	int n;
	printf ("Moi ban nhap vao 1 so nguyen: ");
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			a[i][j]=0; 
		} 
	} 
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ",a[i][j]);
		} 
		printf("\n");
	} 
	
	
	
	return 0;
}
