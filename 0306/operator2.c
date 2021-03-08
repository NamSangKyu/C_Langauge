#include <stdio.h>
int main(void){
	//정수형 변수 두개 선언
	int n1=100, n2=200;
	//비교 연산자 : > < >= <= != ==
	//n1과 n2 모든 비교연산자 결과를 출력 하는 부분을 작성
	
	printf("n1 > n2 --->  %d \n",n1>n2);
	printf("n1 >= n2 --->  %d \n",n1>=n2);
	printf("n1 < n2 --->  %d \n",n1<n2);
	printf("n1 < n2 --->  %d \n",n1<=n2);
	printf("n1 == n2 --->  %d \n",n1==n2);
	printf("n1 !=  n2 --->  %d \n",n1!=n2);
	printf("true false size : %d\n",sizeof(n1==n2));

	//논리 연산자 : &&    ||      !
	printf("n1 > 20 && n2 < 30 : %d\n",n1>20 && n2 < 30);
	printf("n1 > 20 || n2 < 30 : %d\n",n1>20 || n2 < 30);
	printf("!(n1 > 20 || n2 < 30) : %d\n",!(n1>20 || n2 < 30));

	return 0;
}




