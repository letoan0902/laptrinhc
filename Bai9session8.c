#include<stdio.h>
int main(){
	int a[14]={1,2,3,4,5,5};
	int b,c=0,d=0,i,i1,e,n,f;
	for(i=0;i<5;i++){
		b=a[i];
		c=0;
		f=1;
		for (n=i;n<5;n++){
		    if (b==a[i+f]){
			    c++;
		    }
			f++;	
		}
		if (c>d){
			d=c;
			e=i;
		}
	}
	printf("%d",a[e]);
	return 0;
}
