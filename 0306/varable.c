#include <stdio.h>

int main(void){
	//변수타입 : float, double, char
	float f;
	double d;
	char ch;
	//float 초기화 및 출력
	f = 3.14f;
	printf("값 : %f, size : %d\n",f,sizeof(float));
	//double 초기화 및 출력
	d = 3.14;
	printf("값 : %lf, size : %d\n",d,sizeof(double));
	//char 초기화 및 출력
	ch = 'A';
	printf("값 : %c, 아스키 코드값 : %d, size : %d\n",ch,ch,sizeof(ch));
	return 0;
}




