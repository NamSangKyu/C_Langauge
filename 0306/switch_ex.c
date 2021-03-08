#include <stdio.h>
int main(void){
	//성적을입력받아서 해당 성적 등급을 출력하는 예제
	//switch
	int score;
	printf("점수 입력 :");
	scanf("%d",&score);
	
	switch(score / 10){
	case 10:
	case 9:
		printf("성적 등급 A\n");
		break;
	case 8:
		printf("성적 등급 B\n");
		break;
	case 7:
		printf("성적 등급 C\n");
		break;
	case 6:
		printf("성적 등급 D\n");
		break;
	default:
		printf("성적 등급 F\n");
	}

	return 0;
}
