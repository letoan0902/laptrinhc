#include<stdio.h>

void ham(int a[],int *b,int *c){
	int i;
	for (i=6;i>*b;i--){
		a[i]=a[i-1];
	}
	a[*b]=*c;
	for (i=0;i<6;i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int a[6]={1,2,3,4,5};
	int b,c;
	printf("Vi tri can them la: ");
	scanf("%d",&b);
	printf("Gia tri can them la: ");
	scanf("%d",&c);
	ham(a,&b,&c);
	return 0;
} 
