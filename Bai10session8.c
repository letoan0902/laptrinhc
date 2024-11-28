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
		for (n=i;n<6;n++){
		    if (b==a[i+f]){
			    c++;
		    }
			f++;	
		}
		g[i]=c;
		printf("%d",g[i]);
		if (c>d){
			d=c;
			e=i;
		}
	}
//	for (h=0;h<6;h++){
//		if (g[h]==a[e]){
//			for (j=0;j<g[h];j++){
//				if (g[j]==g[h]){
//					dem++;
//				}				
//			}
//			if (dem==1){
//					printf ("%d ",g[h]);
//			}
//		}
//		
//	}
//	printf("%d",a[e]);
	return 0;
}
