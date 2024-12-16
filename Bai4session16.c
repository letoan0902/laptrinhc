#include<stdio.h>

void ham(int a[]){
	int i;
	for (i=0;i<5;i++){
		printf("Mang sau la: %d\n",a[i]);
    }
}
int main (){
	int a[5] = {1,2,3,4,5};
	int i;
	for (i=0;i<5;i++){
		printf("Mang ban dau la: %d\n",a[i]);
	}
	ham(a);
	return 0;
} 
