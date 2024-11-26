#include<stdio.h>
int main(){
	int a,a1,tachSo,total,dem=0;
	a1=100;
	while (1){
		a=a1;
		total=0;
		if (dem==4){
			break;
		}
	    while (a>0){
		    tachSo=a%10;
		    total = total + (tachSo*tachSo*tachSo);
		    a=a/10;
		}
	    if (total==a1){
		    dem++;
		    printf("%d ",a1);
	    }
	    a1++;
	
	}
	return 0;
}
