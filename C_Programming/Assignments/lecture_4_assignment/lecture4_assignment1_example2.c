#include <stdio.h>

void main(){
	int n ;
	float x,product;
	product = 1.0;
	printf("please enter the maximum number of inputs \n");
	fflush(stdout);
	scanf("%d",&n);
	for( int i = 1;i<=n;i++){
		printf("please enter a postive number \n");
		fflush(stdout);
		scanf("%f",&x);
		if(x == 0){
			continue;
		}
		else{
			product *=x;
		}
	}
	printf("the average is : %f",product);
}

