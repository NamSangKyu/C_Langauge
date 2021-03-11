#include <stdio.h>
enum T{
	A,B=10,C,D=20
};
int main(void){
	enum T num;
	num = A;
	printf("%d %d %d %d\n",A,B,C,D);
	printf("%d\n",num);
	return 0;
}
