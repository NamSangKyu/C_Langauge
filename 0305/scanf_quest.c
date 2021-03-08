#include <stdio.h>

int main(void){
	int n1, n2;
	printf("숫자 입력 : ");
	scanf("%d",&n1);
	printf("숫자 입력 : ");
	scanf("%d",&n2);

	printf("%d %d %d %d %d\n",n1+n2,n1-n2,n1*n2,n1/n2,n1 % n2);

	return 0;
}
