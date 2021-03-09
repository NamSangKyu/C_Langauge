#include <stdio.h>

int main(void){
	int i, max, min, total;
	int arr[10];

	for(i=0;i<10;i++){
		printf("숫자 입력 : ");
		scanf("%d",&arr[i]);
	}
	//-------------------------------
	max = min = total = arr[0];
	for(i=1;i<10;i++){
		if(max < arr[i]) max = arr[i];
		if(min > arr[i]) min = arr[i];
		total += arr[i];
	}
	printf("max : %d, min : %d, total : %d\n",max,min,total);
	return 0;
}
