#include <stdio.h>

int main(void){
	char str[50];
	int i;

	printf("input string : ");
	scanf("%s",str);

	//문자열 길이를 구할거면 널문자를 찾아야됨
	i=0;
//	while(str[i] != 0) i++;  둘다 동일함
	while(str[i] != '\0') i++; //널문자를 읽어올때까지 반복 수행
	printf("문자열 길이 : %d\n",i);
	return 0;
}
