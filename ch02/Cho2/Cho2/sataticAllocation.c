#include<stdio.h>
#define SIZE 1000000

int main(void) {
	//int *a = (int *)malloc(sizeof(int) * SIZE);
	
	int a[SIZE] = { 10 }; //�迭 a�� 4Mb ũ�⸦ �䱸��. 1Mb�� �ʰ��ؼ� ������ ����� ���̴�.  
	//a[0] = 10;
	printf("%d\n", a[0]);

	free(a); //�����Ҵ��� ��� ��, �׻� �Ҵ� ����(�Ҹ�)�Ͽ��� ��.

	return 0; 
}