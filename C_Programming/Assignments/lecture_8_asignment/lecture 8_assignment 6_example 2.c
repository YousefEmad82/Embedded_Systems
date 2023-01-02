/*
 * assignment.c
 *
 *  Created on: Dec 27, 2022
 *      Author: youssef's
 */


#include <stdio.h>
#include <string.h>


void main(){
	char x = 'A';
	char *px = &x;
	int i = 0 ;
	for(;i<26;i++){
		printf("%c \n",*px);
		*px = *px +1;
	}
}

