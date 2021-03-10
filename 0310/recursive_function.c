#include <stdio.h>
//재귀 호출 함수 : 함수가 자기 자신을 호출하는 함수
int factorial(int n){
	if(n==1)
		return 1;
	return n * factorial(n-1);
}
//	return 120
// 정수를 하나 매개변수로 받아서 2진수로 변환해서 출력하는 함수
void DecToBinary(int n){
	if(n < 2) printf("%d",n);
	else{
		DecToBinary(n/2);
		printf("%d",n%2);
	}
}
int main(void){
	printf("5! = %d\n",factorial(5));
	DecToBinary(12); //1100 <--출력	
	printf("\n");
	DecToBinary(175);
	printf("\n");
	return 0;
}
