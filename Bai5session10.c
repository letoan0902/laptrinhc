#include<stdio.h>
int main (){
	int a[10]={8,5,7,0,2,9,4,1,3,6};
	int i,j,min,tam,n,l,r,m;
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
	printf("Moi ban nhap so nguyen 0-9: ");
	scanf("%d",&n);
	l=0;
	r=9;
	while (l<=r){
		m=(r+l)/2;
		if (a[m]==n){
			printf("Vi tri cua phan tu %d trong mang la %d",n,m+1);
			break;
		} else if (a[m]>n){
			r=m-1;
		} else {
			l=m+1;
		}
	}
	return 0;
}
