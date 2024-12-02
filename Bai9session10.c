#include<stdio.h>
int main(){
	int a[3][3]={{3,7,5},{1,9,2},{0,6,4}};
	int i,j,temp;
	int b[3]={0};
	for (i=0;i<3;i++){
		b[i]=a[i][i];
	}
	for (i=0;i<2;i++){
		for(j=0;j<3-i-1;j++){
		    if(b[j+1]<b[j]){
		    	temp = b[j+1];
			    b[j+1]=b[j];
			    b[j]=temp;
		    }
		}
	}
	for(i=0;i<3;i++){
		a[i][i]=b[i];
	}	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		    printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
