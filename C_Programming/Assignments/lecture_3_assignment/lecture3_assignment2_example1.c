#include <stdio.h>

void main(){
	printf("please enter an integer number : ");
	fflush(stdout);
	int x;
	scanf("%d",&x);
	if(x%2 == 0){
		printf("%d is even",x);
	}
	else{
		printf("%d is odd",x);
	}


}

