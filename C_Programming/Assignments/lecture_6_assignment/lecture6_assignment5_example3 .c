#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct SComplex{
	float real;
	float imaginary;
};

struct SComplex add(struct SComplex n1,struct SComplex n2);

void main(){
	struct SComplex sum,n1,n2;
	n1.real = 1;
	n1.imaginary = 2;
	n2.imaginary =2.5;
	n2.real = 3;
	sum  = add(n1,n2);
	printf("%f %f",sum.real,sum.imaginary);
}


struct SComplex add(struct SComplex n1,struct SComplex n2){
	struct SComplex sum;
	sum.real = n1.real + n2.real;
	sum.imaginary = n1.imaginary + n2.imaginary;
	return (sum);
}



