#include<stdio.h>
#define SIZE 1000000

int main(void) {
	//int *a = (int *)malloc(sizeof(int) * SIZE);
	
	int a[SIZE] = { 10 }; //배열 a는 4Mb 크기를 요구함. 1Mb를 초과해서 오류가 생기는 것이다.  
	//a[0] = 10;
	printf("%d\n", a[0]);

	free(a); //동적할당은 사용 후, 항상 할당 해제(소멸)하여야 함.

	return 0; 
}