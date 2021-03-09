#include <stdio.h>

int main(void){
	
	char str[20];
	int i;
	printf("문자열 입력 : ");
	//문자열 입출력 할때는 서식문자열 %s 이용
	scanf("%s",str);
	
	printf("입력하신 문자열 :%s\n",str);
	
	for(i=0;i<20;i++)//입력받은 문자열의 문자 코드들을 출력
		printf("%d ", str[i]);
	return 0;
}
