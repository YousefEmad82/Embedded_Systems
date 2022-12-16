#include <stdio.h>
#include "string.h"

void main(){
	char text1[1000],temp;
	printf("enter the text you want to reverse : \n");
	fflush(stdout);
	gets(text1);
	int i ;
	int j = strlen(text1)-1;
	for(i= 0;i<j;i++){
		temp = text1[i];
		text1[i] = text1[j];
		text1[j] = temp;
		j--;
	}
	printf("%s",text1);
}

