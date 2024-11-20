#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("Moi ban nhap vao do C ");
	scanf("%f", &celsius);
	fahrenheit = celsius * 9 / 5 + 32;
	printf("Do F la %.2f",fahrenheit); 
	
	return 0; 
} 
