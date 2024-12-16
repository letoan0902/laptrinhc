#include<stdio.h>

void ham(int a[], int *b){
	int i;
	for (i=0;i<5;i++){
		if(a[i]==*b){
			printf("%d",i);
		}
	}
}
int main (){
	int a[5]={1,2,3,4,5};
	int b;
	printf("Gia tri muon tim kiem la: ");
	scanf("%d",&b);
	ham(a,&b);
	return 0;
} 
