#include<stdio.h>
int main(){
	int a[6]={1,1,3,4,5,5};
	int g[6] = {0};
	int b,c=0,d=0,i,i1,e,n,f,h,j,dem=0;
	printf("Cac so xuat hien nhieu nhat la: ");
	for(i=0;i<6;i++){
		b=a[i];
		c=0;
		f=1;
		for (n=i;n<5;n++){
		    if (b==a[i+f]){
			    c++;
		    }
			f++;
		}
		g[i]=c;
	}
	dem=0; 
	for (i=0;i<6;i++){
		if (g[i]>=g[dem]){
			dem=i;
		}
	}
	for (i=0;i<6;i++){
		if (g[i]==g[dem]){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
