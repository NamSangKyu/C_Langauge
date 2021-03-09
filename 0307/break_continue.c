#include <stdio.h>

int main(void){
	//숫자 0을 입력할때까지 반복을 수행하여,
	//입력이 끝나면 입력 숫자들중 짝수의 합을 출력
	//단 break반드시 사용하세요
	int num = 0;
	int total = 0;	
	//C언어 무한루프 방식
	while(1){
		printf("숫자 입력 : ");
		scanf("%d",&num);
		if(num == 0)break;
		if(num % 2 == 1) continue;
		total += num;
	}
	printf("입력하신 숫자들의 총합 : %d\n",total);
	return 0;
}
