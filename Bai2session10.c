#include<stdio.h>
int main (){
	int a[10]={8,5,7,0,2,9,4,1,3,6};
	int tam,i,j;
	for (i=0;i<9;i++){
		for (j=0;j<9-i;j++){
			if(a[j]>a[j+1]){
				tam=a[j];
				a[j]=a[j+1];
				a[j+1]=tam;
			}
		}
	}
	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
