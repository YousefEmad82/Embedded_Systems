#include <stdio.h>

void main(){
	int x ,y;
	scanf("%d %d",&x,&y);
	y +=x;
	x= y-x;
	y = y-x;
	printf("x = %d, y = %d",x,y);
}

