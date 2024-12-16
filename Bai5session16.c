#include<stdio.h>

void ham(int a[],int *b,int *c){
	a[*b-1]=*c;
	int i;
	for (i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int a[5]={1,2,3,4,5};
	int b,c;
	printf("Vi tri can cap nhat la: ");
	scanf("%d",&b);
	printf("Gia tri can cap nhat la: ");
	scanf("%d",&c);
	ham(a,&b,&c);
	return 0;
} 
