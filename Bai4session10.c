#include<stdio.h>
int main (){
	int a[10]={8,5,7,0,2,9,4,1,3,6};
	int i,j,min,tam;
	for (i=0;i<9;i++){
		min=a[i];
		tam=i; 
		for (j=i+1;j<10;j++){
			if(a[j]<min){
				min=a[j];
				tam=j;
			}
		}
		a[tam]=a[i];
		a[i]=min;
	}
	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
