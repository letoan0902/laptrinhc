#include<stdio.h>
    int main(){
    int a,b,c;
	printf ("Moi ban nhap so nguyen a ");
	scanf("%d", &a);
	printf ("Moi ban nhap so nguyen b ");
	scanf("%d", &b);
	printf ("Moi ban nhap so nguyen c ");
	scanf("%d", &c);
	if ( a>b&&a>c){
		if (b>c){
			printf ("Thu tu nho den lon la %d %d %d", c,b,a); 
		} else{
			printf ("Thu tu nho den lon la %d %d %d", b,c,a);
		} 
    } else if (b>a&&b>c) {
    	if (a>c){
			printf ("Thu tu nho den lon la %d %d %d", c,a,b); 
		} else{
			printf ("Thu tu nho den lon la %d %d %d", a,c,b);
		} 
	} else if (c>a&&c>b) {
    	if (a>b){
			printf ("Thu tu nho den lon la %d %d %d", b,a,c); 
		} else{
			printf ("Thu tu nho den lon la %d %d %d", a,b,c);
		}
    }
    return 0;	
} 
