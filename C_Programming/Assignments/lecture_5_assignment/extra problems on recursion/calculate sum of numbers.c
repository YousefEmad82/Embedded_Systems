#include <stdio.h>
#include <string.h>

/*calculate sum of numbers from 1 to n using recursion */
int sum(int n);

void  main(){
	printf("%d",sum(3));
}

int sum(int n){
	if(n>1){
		return (n + sum(n-1));
	}
	else{
		return 1;
	}
}





