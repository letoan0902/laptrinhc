#include<stdio.h>
void ham(int a[]){
	int i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int a[5]={1,4,3,5,2};
	ham(a);
	
	return 0;
} 
