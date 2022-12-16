#include <stdio.h>

void main(){
	char text[1000],c;
	int frequency =0;
	printf("enter your text \n ");
	fflush(stdout);
	gets(text);
	printf("enter the character to calculate the frequency of it \n");
	fflush(stdout);
	scanf("%c",&c);
	for(int  i = 0;text[i]!='\0';i++){
		if(text[i] == c){
			frequency++;
		}

	}
	printf("frequency of %c is : %d ",c,frequency);
}

