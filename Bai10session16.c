#include<stdio.h>

void ham(int a[],int *b){
	int i;
	for (i=*b;i<5;i++){
		a[i]=a[i+1];
	}
	for (i=0;i<4;i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int a[5]={1,2,3,4,5};
	int b,c;
	printf("Vi tri can xoa la: ");
	scanf("%d",&b);
	ham(a,&b);
	return 0;
} 
