#include <stdio.h>

int main(void){
	//배열 크기가 고정, 프로그램 실행시 크기를 바꿀수 없음
	//변수타입 변수명[개수]; <-- 배열 선언 방법
	//          0 1 2 3 4
	int arr[5]={1,2,3,4,5};
	int arr2[5] = {0}; //이럴 경우 0번째는 0이 저장, 나머지 전부 0으로 저장
	int i=0;

	for(i=0;i<5;i++){
		printf("arr[%d] : %d\n",i,arr[i]);

	}
	return 0;
}
