#include <stdio.h>
#include <string.h>

void reverse();
void  main(){
	reverse();


}

void reverse(){
	char x;
	scanf("%c",&x);
	if(x!='\n'){
		reverse();
		printf("%c",x);
	}
}





