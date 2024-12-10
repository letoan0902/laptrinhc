#include<stdio.h>
int ham(int a){
		int i,b=1;
		for(i=a;i>0;i--){
			b=b*i;
		} 
		printf("%d",b);
	}
int main (){
	ham(3);

	return 0;
}
