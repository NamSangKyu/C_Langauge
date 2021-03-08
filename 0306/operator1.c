#include <stdio.h>
int main(void){
	int n1, n2;
	printf("숫자 두개 입력 : ");
	scanf("%d %d",&n1, &n2);//10 20 띄워쓰기로 입력데이터를 구분

	//사칙 연산 결과 출력 -->%% % 문자 하나로 인식해서 출력
	printf("%d %d %d %d %d\n",n1+n2,n1-n2,n1*n2,n1/n2,n1%n2);
	//복합 대입 연산자 += -= *= /= %=
	n1 += 100;
	printf("n1 = %d\n",n1);
	//증감 연산자
	n2++;
	++n2;
	printf("n2 = %d\n",n2);

	return 0;
}
