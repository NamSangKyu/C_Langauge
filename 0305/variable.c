#include <stdio.h>

int main(void){
	int age = 20;
	double pi = 3.1415;
	float f1 = 3.1415f;

	printf("age = %d\n",age);
	printf("pi = %lf, f1 = %f\n",pi,f1);
	printf("pi = %g, f1 = %g\n",pi,f1);
	
	return 0;
}
