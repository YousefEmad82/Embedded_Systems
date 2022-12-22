#include <stdio.h>
#include <string.h>

int power(int base,int pow);
void  main(){

	printf("%d",power(2,2));
}

int power(int base,int pow){
	if(pow!=0){
		return (base*power(base,pow-1));
	}
	else
		return 1;
}





