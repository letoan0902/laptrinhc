#include<stdio.h>
int main(){
	int a[3][3]={{3,7,5},{1,8,2},{0,6,4}};
	int i,j,temp;
	int b[3]={0};
	j=2;
	for (i=0;i<3;i++){
		b[i]=a[i][j];
		j--;
	}
	for (i=0;i<2;i++){
		for(j=0;j<3-i-1;j++){
		    if(b[j+1]>b[j]){
		    	temp = b[j+1];
			    b[j+1]=b[j];
			    b[j]=temp;
		    }
		}
	}
	j=2;
	for (i=0;i<3;i++){
		a[i][j]=b[i];
		j--;
	}	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		    printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
