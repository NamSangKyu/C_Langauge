#include <stdio.h>
int sum(int n1, int n2){
	return n1 + n2;
}
//매개변수로 정수 두개를 받아서 두 정수 중 큰 값을 되돌려주는 함수를 작성
int max(int n1, int n2){
	return n1 > n2 ? n1 : n2;
}
int CheckEven(int num){
	return num%2==0;
}
int main(void){
	printf("%d\n",sum(10,20));
	printf("%d\n",max(5,6));
	int num;
	printf("숫자 입력 : ");
	scanf("%d",&num);
	if(CheckEven(num))
		printf("입력하신 숫자는 짝수입니다.\n");
	else
		printf("입력하신 숫자는 홀수입니다.\n");
	return 0;
}




