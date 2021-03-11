#include <stdio.h>
struct person{
	char name[32];
	int age;
};
int main(void){
	struct person p = {"홍길동",20};
	printf("name address : %p\n",p.name);
	printf("age address : %p\n",&p.age);
	printf("%s %d \n",p.name,p.age);
	return 0;
}
