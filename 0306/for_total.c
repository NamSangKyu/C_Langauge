#include <stdio.h>

int main(void){
	int total = 0;
	int i=1;
	for(i=1;i<100;i++){
		if(i%2==1)
			total += i;
	}

	printf("%d\n",total);

	return 0;
}
