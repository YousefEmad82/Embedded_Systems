/*
 * assignment.c
 *
 *  Created on: Dec 27, 2022
 *      Author: youssef's
 *      lecture 8_assignment 6_example 2
 */


#include <stdio.h>
#include <string.h>


void main(){
	char  x[100] ;
	scanf("%s",x);
	printf("the input string is : %s \n",x);
	char *px = x + strlen(x)-1;
	int i = strlen(x)-1;
	printf("the reversed string is : ");
	for(;i>=0;i--){
		printf("%c",*px);
		px--;
	}
}

