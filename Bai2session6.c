#include<stdio.h>
int main(){
	int a[5];
	int i;
	for(i=0;i<5;i++) {
		printf("Moi ban nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("%d %d %d %d %d ",a[0],a[1],a[2],a[3],a[4]);
	
	return 0;
}
