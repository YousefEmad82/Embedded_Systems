#include <stdio.h>

void main(){
	printf("please enter a postive number");
	int x;
	unsigned long long int factorial = 1;
	fflush(stdout);
	scanf("%d",&x);
	if(x <0){
		printf("error, factorial of a negative number doesn't exist ");
	}
	else{
		for( int i = x;i>0;i--){
			factorial = factorial*i;
		}
	}
	printf("factorial = %lu",factorial);

}

