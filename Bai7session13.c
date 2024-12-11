#include <stdio.h>
int ham(int m, int n){
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("Nhap phan tu thu [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int m,n;
    printf("Nhap so hang: ");
    scanf("%d",&m);
    printf("Nhap so cot: ");
    scanf("%d",&n);
    ham(m,n);
    return 0;
}

