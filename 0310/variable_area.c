#include <stdio.h>
//전역변수(외부 변수), 지역변수, static 변수
//지역변수 : local variable { } 내에서만 접근 가능, stack 메모리에 할당
void printInfo(int age){
	printf("이사람의 나이 : %d\n",age);
}
//함수 외부에 선언된 변수, 누구나 전역 변수에 접근할 수 있음
//초기화를 안하면 자동으로 0로 초기화 됨
//data 영역
int total;
double d1;
char ch;
int arr[10];
//static 변수는 함수가 종료 되더라도 계속 값을 유지하는 변수
void testStaticVar(){
	static int count = 0;
	count++;
	printf("count : %d\n",count);
}

int main(void){
	printf("%d %lf %c %d\n",total, d1, ch, ch);
	testStaticVar();
	testStaticVar();
	testStaticVar();
	testStaticVar();
	testStaticVar();

	return 0;
}
