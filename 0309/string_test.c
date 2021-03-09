#include <stdio.h>
int main(void){
	//문자열 입력 및 출력 예제
	char str[]="Hello World";
	//str == &str[0] --> 배열 명만 쓰면 해당 배열의 첫번째 주소값이 나옴
	printf("str : %s\n",str);
	printf("string length : %d\n",sizeof(str));
	printf("null char : %c,  null char code : %d\n",
				str[sizeof(str)-1],str[sizeof(str)-1]);
	return 0;
}
