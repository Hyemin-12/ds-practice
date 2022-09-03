#include<stdio.h>
#define SIZE 11 //컴파일 시 값이 주어진다.
int main(void) {
	char a[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };//'\0'-> 문자열(문자를 연속적으로 나열)의 끝표시
	int index, i;
	char value; //삽입할 값
	printf("삽입 위치 : ");
	scanf_s("%d", &index);//입력버퍼(4를 입력하면 입력버퍼에 4가 남아있다.)
	//버퍼는 데이터를 잠시 가지고 있는데,이는 컴퓨터처리속도와 사람의 입력 속도 해소 
	getchar();//입력 버퍼 
	printf("삽입 Data : ");
	scanf_s("%c", &value, 1);
	getchar(); //입력 버퍼
/*
	i = SIZE - 1;
	while (i > index) {
		a[i] = a[i - 1]; //a[9]을 a[10]에 대입 
		i--;
	}
*/
	for (int i = SIZE - 1; i > index; i--) {
		a[i] = a[i - 1];
	}

	a[SIZE - 1] = '\0';//문자열 끝의 표시 
	a[index] = value;
	printf("삽입 결과 : %s\n", a);

	return 0;
}