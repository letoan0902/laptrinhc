#include<stdio.h>
int main (){
	int a[10]={3,3,3,5,6,7,7,7,8,8};
	int n,i,b=0;
	int c[10]={0};
	printf("Moi ban nhap so phan tu: ");
	scanf("%d",&n);
	printf("Vi tri cua phan tu co trong mang la: ");
	for(i=0;i<10;i++){
		if(a[i]==n){
			c[i]=i+1; 
			b++;
		}
	}
	for (i=0;i<10;i++){
		if (c[i]!=0){
			printf("%d ",c[i]);
		}
	} 
	if(b==0){
		printf("khong co");
	}
	return 0;
}
