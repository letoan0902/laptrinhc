#include<stdio.h>
int main (){
	char chuoi[9]="LePhuToan";
	int i;
	for (i=strlen(chuoi)-1;i>=0;i--){
		printf("%c ",chuoi[i]); 
	}	
	return 0;
} 
