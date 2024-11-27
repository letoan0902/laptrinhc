#include<stdio.h>
int main(){
	int n,a,i,dem=0,soLuong=0;
	a=2;
	printf("Nhap so: ");
	scanf("%d",&n);
	printf("%d so nguyen to dau tien la: ",n);
	while (1){
		if (soLuong==n){
			break;
		}
		for (i=2;i<a;i++){
		    if (a%i==0){
			    dem++;
		    }	
	    } 
	    if (dem==0){
	    	printf("%d ",a);
	    	soLuong++;
		}
		dem=0;
		a++;
				
	} 
	
	return 0;
}
