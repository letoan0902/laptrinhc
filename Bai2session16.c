#include<stdio.h>

void ham(int *n,int *m){
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}
int main (){
	int n=7;
	int m=9;
	printf("Gia tri cua bien n cu la: %d\n",n);
	printf("Gia tri cua bien m cu la: %d\n",m);
	ham (&n,&m);
	printf("Gia tri cua bien n moi la: %d\n",n);
	printf("Gia tri cua bien m moi la: %d",m);
	return 0;
}
