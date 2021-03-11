#include <stdio.h>
#include <string.h>
struct student{
	char sno[10];
	char name[30];
	char major[50];
	double score;
};
struct student arr[10];
int index = 0;
//데이터 추가
void AddStudent(){
	if(index ==10){
		printf("더이상 저장될 공간이 없습니다\n");
		return;
	}
	printf("학번 입력 :");	scanf("%s",arr[index].sno);
	printf("이름 입력 :");	scanf("%s",arr[index].name);
	printf("전공 입력 :");	scanf("%s",arr[index].major);
	printf("평점 입력 :");	scanf("%lf",&arr[index].score);
	index++;//입력이 끝난 후 다음데이터 입력 받을 인덱스로 이동
}
//데이터 삭제
void DeleteStudent(){
	//삭제할 학번 입력
	char sno[30];
	printf("삭제할 학번을 입력하세요 : ");
	scanf("%s",sno);
	//삭제할 데이터를 조회
	int i;
	for(i=0;i<index;i++){
		if(strcmp(arr[i].sno,sno)==0){
			//해당 인덱스에서 다음인덱스 값을 복사받음
			int j;
			for(j=i;j<index-1;j++)
				arr[j] = arr[j+1];
			//인덱스 감소 
			index--;
			printf("입력한 데이터를 정상적으로  삭제했습니다.\n");
			return;
		}
	}
	printf("삭제할 데이터가 없습니다\n");
}	
int main(void){
	AddStudent();
	AddStudent();
	AddStudent();
	DeleteStudent();
	return 0;
}

