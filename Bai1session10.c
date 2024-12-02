#include<stdio.h>
int main (){
	int a[5]={1,2,3,4,5};
	int n,i,b=0;
	
	printf("Moi ban nhap so phan tu: ");
	scanf("%d",&n);
	printf("Vi tri cua phan tu co trong mang la: ");
	for(i=0;i<5;i++){
		if(a[i]==n){
			printf("%d",i+1);
			b++;
		}
	}
	if(b==0){
		printf("khong co");
	}
	return 0;
}
