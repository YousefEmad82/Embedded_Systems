#include <stdio.h>

void main(){
	int n,i ;
	float x,sum,average;
	sum = 0.0;
	printf("please enter the maximum number of inputs \n");
	fflush(stdout);
	scanf("%d",&n);
	for( i = 1;i<=n;i++){
		printf("please enter a postive number \n");
		fflush(stdout);
		scanf("%f",&x);
		if(x<0){
			break;
		}
		else{
			sum +=x;
		}
	}
	average = sum/(i-1);
	printf("the average is : %f",average);
}

