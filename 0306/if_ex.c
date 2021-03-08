#include <stdio.h>

int main(void){
	//점수하나 입력 후
	//점수에 해당하는 성적 등급을 출력 - if문으로 작업
	int score;
	printf("점수하나 입력 : ");
	scanf("%d",&score);
	
	if(score >= 90)
		printf("성적등급 A\n");
	else if(score >=80)
		printf("성적등급 B\n");
	else if(score >=70)
		printf("성적등급 C\n");
	else if(score >=60)
		printf("성적등급 D\n");
	else
		printf("성적등급 F\n");
	
	return 0;
}
