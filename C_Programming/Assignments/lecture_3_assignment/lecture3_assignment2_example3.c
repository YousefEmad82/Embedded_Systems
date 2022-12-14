#include <stdio.h>

void main(){
	printf("please enter three numbers");
	float x,y,z;
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>=y){
		if(x>=z){
			printf("largest number is %f",x);
		}
		else{
			printf("largest number is %f",z);
		}
	}
	else{
		if(y>=z){
			printf("largest number is %f",y);
		}
		else{
			printf("largest number is %f",z);
		}
	}

}

