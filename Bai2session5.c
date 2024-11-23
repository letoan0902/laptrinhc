#include<stdio.h>
int main (){
	int n;
	int i=6;
	while(1){
	
	printf("Ban hay nhap vao so tu 1-10 ");
	scanf("%d",&n);
	    if (n==i){
		
		printf("Ban nhap dung so roi, so can doan la %d ",n);
		break;
		
	    } else {
	    	printf("\nSai roi, nhap lai so khac xem\n");
		}  
    }
	return 0; 
} 
