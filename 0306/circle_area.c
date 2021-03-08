#include <stdio.h>

int main(void)
{
	int r;
	double area = 0.0;

	printf("반지름 입력 : ");
	scanf("%d",&r);

	area = r*r*3.1415;//auto casting
	printf("r: %d, area : %lf\n",r,area);


	return 0;
}
