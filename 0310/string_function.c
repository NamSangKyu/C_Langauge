#include <stdio.h>
#include <string.h>

int main(void){
	//문자열 길이 구하는 함수
	char str1[] = "Hello World";
	int length = strlen(str1);
	printf("string length : %d \n",length);
	//문자열 비교하는 함수
	//strcmp(string,string) 두 문자열이 동일하면 0, 다르면 무슨값이 나올지 모름
	char str2[] = "Hello World";
	char str3[] = "TEST WORLD";
	printf("str1 == str2 : %d\n",strcmp(str1,str2));
	printf("str1 == str3 : %d\n",strcmp(str1,str3));	
	//문자열 복사하는 함수
	char str4[50];
	strcpy(str4,str1);//복사한 문자열 마지막에 널문자 처리
	printf("%s\n",str4);
	//str4 문자열 길이 출력
	printf("str4 length :%d\n",strlen(str4));
	//문자열 부분 복사 
	//strncpy(복사받는 메모리 주소, 복사할 값이 있는 메모리 주소, 복사할 개수)
	char str5[50];
	strncpy(str5,str1,4);
	printf("%s\n",str5);
	printf("str5 length :%d\n",strlen(str5));
	return 0;
}
