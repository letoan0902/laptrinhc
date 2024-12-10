#include<stdio.h>
int ham(int a[5]){
		int i;
		for(i=0;i<5;i++){
			printf("%d",a[i]);
		} 
	}
int main (){
	int b[5]={1,2,5,4,3};
	ham(b);

	return 0;
}
