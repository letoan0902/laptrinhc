#include<stdio.h>
int main (){
	int i,j,c=0;
	int a[3][4] = {{7,9,4,5},{2,11,10,12},{8,1,3,6}};
	int b[12];
	for (j=0;j<4;j++){
		for (i=0;i<3;i++){
			b[c]=a[i][j];
			c++;
		}
	}
	int tam;
	for (i=1;i<12;i++){
		tam=b[i];
		j=i-1;
		while (j>=0&&b[j]>tam){
			b[j+1]=b[j];
			j--;
		}
		b[j+1]=tam;
	}
	c=0;
	for (j=0;j<4;j++){
		for (i=0;i<3;i++){
			a[i][j]=b[c];
			c++;
		}
	}
	for (i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
