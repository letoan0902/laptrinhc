#include<stdio.h>
int main(){
	int a[2][2]={{1,9},{3,4}};
	int n=0;
	int i,j;
		for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			if (n<a[i][j]) {
				n=a[i][j];
			}
		} 
	} 
	printf("So lon nhat trong mang la %d",n);
	
	return 0;
}
