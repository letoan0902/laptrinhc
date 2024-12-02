#include<stdio.h>
int main (){
	int a[10]={8,5,7,0,2,9,4,1,3,6};
	int i,j,tam;
	for (i=1;i<10;i++){
		tam=a[i];
		j=i-1;
		while (j>=0&&a[j]>tam){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=tam;
	}
	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
