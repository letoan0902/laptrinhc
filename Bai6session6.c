#include<stdio.h>
int main(){
	int a[5]= {1,2,3,4,5};
	int i,n;
	for (i=0;i<5;i++){
		if ((a[i]%2)==1){
		    n=a[i]+2;
		    printf ("%d ",n);
		} else {
			n=a[i]+3;
			printf ("%d ",n);
		}
	}
	
	
	return 0;
}
