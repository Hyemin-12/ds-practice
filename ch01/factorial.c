#include<stdio.h>
//펙토리얼 구하기 방법 (1. for문 2. 재귀호출 ) 
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
//여기쓰는 변수는 전역변수 ex) int n; 

int factorial(int n) {   //지역변수 n 
	if (n == 1) return 1;
	else return n* factorial(n - 1);
	/*
	5 * 4!
	4 * 3!
	3 * 2!
	2 * 1!
	n == 1이 되므로 2 * 1!로 1이 넘어가게 되어 1!이 1이 되므로 리턴값을 리턴해준다. 
	재귀호출
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