#include<stdio.h>
int main (){
	int n;
	int i,i1,i2 ;
	printf("Ban hay nhap mot so nguyen duong n duoi 10 ");
	scanf("%d",&n);

	for (i = 1; i <=(n*10) ; i++) {
		if(n>10||n<1){
		    printf("Ban nhap khong dung dinh dang ");
		    break;
	    }
		
		for (i1 = 1; i1<= 10; i1++){
			i2=n*i1; 
			printf("%d x %d = %d ",n,i1,i2);
		}
		printf(" \n");
		--n;
	}
	return 0; 
} 
