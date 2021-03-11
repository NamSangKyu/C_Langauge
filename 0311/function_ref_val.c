#include <stdio.h>

void SwapNumber(int n1,int n2){
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
//숫자 두개를 받아서 보낸 원본 변수가 서로 값이 바뀌겠끔
void SwapNumberRef(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main(void){
	int num1 = 10, num2 = 20;
	SwapNumber(num1,num2);
	printf("num1 : %d, num2 : %d\n",num1,num2);
	SwapNumberRef(&num1,&num2);
	printf("num1 : %d, num2 : %d\n",num1,num2);
	return 0;
}
