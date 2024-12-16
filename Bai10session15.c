#include <stdio.h>

int main(){
	
	char text[]="sjeobdie";
	int size=strlen(text);
	int temp[size];
	for (int i=0;i<size;i++){
		temp[i]=0;
	}
	for (int i = 0; i < size; i++) {
        if (temp[i] == 1) { 
            continue;
        }
        int count=1;
        char current=text[i];
        for (int j = i + 1; j < size; j++) {
            if (text[j] == current) {
                count++;
                temp[j] = 1; 
            }
        }
        printf("%c : %d \n",current,count);
    }

    
	
	
	
	return 0;
}
