#include<stdio.h>
int main(){
	int a[100];
	int b,c,nho,i,n,m,dem;
	printf("Hay nhap so phan tu muon them: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("Phan tu thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Mang hien tai la: ");
	for (i=0;i<m;i++){
	printf("%d",a[i]);
	}
	while (1){
		printf("\nNhap vi tri muon them vao mang: ");
	    scanf("%d",&b);
	    if(b>0&&b<=m){
	    	break;
		}
    }
	    printf("Nhap gia tri muon them vao mang: ");
	    scanf("%d",&c);	
	    b=b-1;
	    for (i=m;i>b;i--){
		    a[i]=a[i-1];
	    }
	    a[b]=c;
	    for (i=0;i<=m;i++){
		    printf("%d",a[i]);
	    }
	return 0;
} 
