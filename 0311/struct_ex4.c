#include <stdio.h>
typedef struct person{
	char name[30];
	int age;
}Person;
typedef int* PINT;
//typedef struct person Person;
int main(void){
	struct person p;
	Person p1;
	int num = 10;
	PINT ptr = &num;
	return 0;
}
