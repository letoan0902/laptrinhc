#include<stdio.h>
int main (){
	int n=7;
	int *nPtr=&n;
	printf("Dia chi cua bien n la: %d\n",&n);
	printf("Dia chi cua bien n la: %d\n",nPtr);
	printf("Gia tri cua bien n la: %d\n",n);
	printf("Gia tri cua bien n la: %d",*nPtr);
	return 0;
}
