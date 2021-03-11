#include <stdio.h>
//열거형 -->  순서대로 번호를 부여해서 상수로 만들때
//상수에 값을 넣지 않으면 선언한 순서대로 0부터 순서대로 부여
//특정 상수에 값을 지정하면 그 다음값부터는 이전에 있던 값 + 1해서 부여
enum{ INSERT=1, UPDATE, SELECT, DELETE };
//     1           2      3      4

int main(void){	
	const int num = 10;
	const int n1;
//	n1 = 100; // 선언과 동시에 초기화를 진행
	printf("%d %d %d %d\n",INSERT,UPDATE,SELECT, DELETE);
	int menu;
	printf("1. Insert\n");	printf("2. Update\n");
	printf("3. Select\n");	printf("4. Delete\n");
	printf("input menu no : "); scanf("%d",&menu);
	switch(menu){
	case INSERT:
		printf("Insert\n");
		break;
	case UPDATE:
		printf("Update\n");
		break;
	case SELECT:
		printf("Select\n");
		break;
	case DELETE:
		printf("Delete\n");
		break;
	}
	return 0;
}
