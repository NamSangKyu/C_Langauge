#include <stdio.h>
#include <string.h>
struct person{
	char name[30];
	int age;
};
int main(void){
	struct person p ={"홍길동",20};

	char str[30] = "김철수";
	char *str2  = "김영수";

	//p.name = str; //X
	p.age = 30; //값은 O

	//문자열같은 경우에는 직접 scanf를 이용해서 입력
	//strcpy를 통해서 복사
	strcpy(p.name,str);
	printf("%s\n",p.name);
	strcpy(p.name,str2);
	printf("%s\n",p.name);
	return 0;
}
