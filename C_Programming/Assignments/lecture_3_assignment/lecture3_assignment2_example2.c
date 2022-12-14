#include <stdio.h>

void main(){
	printf("enter a character");
	fflush(stdout);
	char x ;
	scanf("%c",&x);
	if(x == 'a'|| x =='A'||x == 'e'||x == 'E'||x == 'o'||x == 'O'||x == 'u'||x ==  'U'||x == 'i'||x == 'I'){
		printf("%c is vowel",x);
	}
	else{
		printf("%c is constant",x);
	}


}

