#include <stdio.h>

int main(void){
	int num = 20;
	int* ptr = &num;//포인터 변수
	printf("변수 num이 실제로 저장된 메모리 주소값 : %p\n",&num);
	printf("포인터 변수 ptr이 실제로 저장된 메모리 주소값 : %p\n",&ptr);
	printf("ptr : %p\n",ptr);
	printf("*ptr : %d\n",*ptr);
	return 0;
}
