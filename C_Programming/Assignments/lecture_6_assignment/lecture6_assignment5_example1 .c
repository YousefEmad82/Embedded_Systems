#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct SStudent {
	char name[50];
	int roll;
	int marks;
};

struct SStudent read_student();
void print_student(struct SStudent student);
void main(){
	struct SStudent student;
	student = read_student();
	print_student(student);

}

struct SStudent  read_student(){
	struct SStudent student;
	printf("enter information of student: \n");
	fflush(stdout);
	printf("enter student name: \n");
	fflush(stdout);
	scanf("%s",student.name);
	printf("enter student roll: \n");
	fflush(stdout);
	scanf("%d",&student.roll);
	printf("enter student marks: \n");
	fflush(stdout);
	scanf("%d",&student.marks);
	return student;
}


void print_student(struct SStudent student){
	printf(" student name: %s \n",student.name);
	printf(" student roll: %d \n",student.roll);
	printf(" student marks: %d \n",student.marks);
}








