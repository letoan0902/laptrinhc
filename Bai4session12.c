#include <stdio.h>
int ham(int a[10]){
	int max=a[0];
	int i;
	for(i=1;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("So lon nhat trong mang la %d",max);
	} 
int main() {
    int b[10]={1,4,2,3,77,8,6,0,7,9};
    ham(b);
    return 0;
}

