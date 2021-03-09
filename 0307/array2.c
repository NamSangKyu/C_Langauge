#include <stdio.h>

int main(void){
	int arr[10];
	int i;
	//배열개수 구하는 부분
        //             40            4
	int size = sizeof(arr) / sizeof(int);
	for(i=0;i<size;i++)
	{
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
		printf("arr[%d] : %d\n",i,arr[i]);
	return 0;
}
