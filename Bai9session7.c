#include<stdio.h>
int main(){
	int n,m;
	printf ("Moi ban nhap vao so hang: ");
	scanf("%d",&n);
	printf ("Moi ban nhap vao so cot: ");
	scanf("%d",&m);
	int a[n][m];
	int i,j;
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("So %d hang %d: ",(j+1),(i+1));
			scanf("%d",&a[i][j]);
		} 
	} 
    for (i=0;i<n;i++){
	
		if ( i == 0 || i == (n-1) ) {
		    for (j=0;j<m;j++){
			    printf("%d ",a[i][j]);
		    }
		} else {
			printf ("%d", a[i][0]);
			
			for (j=0;j<m;j++){
			    if (j==(m-1)){
				    printf ("%d",a[i][(m-1)]);
			    } else {
			    	printf ("  ");
				}
			}
		} 
		printf("\n");
    }
	
	
	return 0;
}
