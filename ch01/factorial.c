#include<stdio.h>
//���丮�� ���ϱ� ��� (1. for�� 2. ���ȣ�� ) 
/*
int main(void) {
	int n = 5, facto = 1;
	for (int i = n; i >= 1; i--) {
		facto *= i; //facto = facto * i; 
	}


	printf("%d!=%d\n", n, facto);
	return 0;
}
*/
//���⾲�� ������ �������� ex) int n; 

int factorial(int n) {   //�������� n 
	if (n == 1) return 1;
	else return n* factorial(n - 1);
	/*
	5 * 4!
	4 * 3!
	3 * 2!
	2 * 1!
	n == 1�� �ǹǷ� 2 * 1!�� 1�� �Ѿ�� �Ǿ� 1!�� 1�� �ǹǷ� ���ϰ��� �������ش�. 
	���ȣ��
	2 * 1 = 2
	3 * 2 = 6
	4 * 6 = 24
	5 * 24 = 120
	*/
}

int main(void) {
	int n = 5;
	printf("%d!=%d\n", n, factorial(n));
}