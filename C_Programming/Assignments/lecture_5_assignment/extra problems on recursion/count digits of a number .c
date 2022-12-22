#include <stdio.h>
#include <string.h>

/*count digits of a number   */
int count_digits(int number);

void  main(){
	printf("%d",count_digits(122));
}


int count_digits(int number){
	if((number/10)>0){
		return (1+count_digits(number/10));
	}else{
		return 1;
	}
}




