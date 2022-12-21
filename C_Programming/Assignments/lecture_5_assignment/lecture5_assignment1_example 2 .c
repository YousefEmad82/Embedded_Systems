#include <stdio.h>
#include <string.h>

unsigned long long int fact = 1;
unsigned long long factorial(int n);

void  main(){
	unsigned long long int  x;
	x = factorial(0);
	printf("%d",x);
}


 unsigned long long int  factorial (int a){
	 if(a==0)
		 return fact;
	 else if(a>0){
		 fact = fact*a;
		 a--;
		 return factorial(a);
	 }
	 else{
		 return -1;
	 }


 }


