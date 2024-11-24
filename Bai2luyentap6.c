#include<stdio.h>
int main(){
	int so1,so2,so3,so4,so5;
	int i=0,i1=0;
	printf("Nhap vao so nguyen thu 1: ");
	scanf("%d",&so1);
	printf("Nhap vao so nguyen thu 2: ");
	scanf("%d",&so2);	
	printf("Nhap vao so nguyen thu 3: ");
	scanf("%d",&so3);	
	printf("Nhap vao so nguyen thu 4: ");
	scanf("%d",&so4);	
	printf("Nhap vao so nguyen thu 5: ");
	scanf("%d",&so5);
	if(so1%2==1){
		i++;
	} else{
		i1++;
	}
	if(so2%2==1){
		i++;
	} else{
		i1++;
	}
	 if(so3%2==1){
		i++;
	} else{
		i1++;
	}
	 if(so4%2==1){
		i++;
	} else{
		i1++;
	}
	if(so5%2==1){
		i++;
	} else{
		i1++;
	}
	printf("Co %d so le\nCo %d so chan",i,i1);

	return 0;
}
