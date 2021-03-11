#include <stdio.h>
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
	//삭제할 데이터를 조회
	//	해당 인덱스에서 다음인덱스 값을 복사받음
	//인덱스 감소
}	
int main(void){
	struct student s = {"20001144","홍길동","경영학과",3.14};
	printf("%s,%s,%s,%lf\n",s.sno,s.name,s.major,s.score);
	return 0;
}

