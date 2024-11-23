#include<stdio.h>
int main(){
	int a[5] = {1,2,102,4,99};
	int i=1;
	while (!(a[0]>=a[1]&&a[0]>=a[2]&&a[0]>=a[3]&&a[0]>=a[4])){
	
	    if (a[0] < a[i]){
		    a[0]=a[i];
	    }
	i++; 
    }    
	printf("So lon nhat la: %d",a[0]);
	return 0;
}

