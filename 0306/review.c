#include <stdio.h>

int main(void){
	int num;
	printf("input number : ");
	scanf("%d",&num);
	printf("%d %d\n",num, &num);

	return 0;
}
