#include <stdio.h>
#include <string.h>

void isPrime(int a,int b);

void  main(){
	isPrime(3,30);

}

void isPrime(int a, int b){
	int i= a;
	int j;
	for(;i<=b;i++){
		int flag = 1;
		for(j = 2;j<i;j++){
			if((i%j)== 0){
				flag = 0;
				break;
			}
		}
		if(flag ==  1){
			printf("%d \n",i);
		}
	}

}





