#include<stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

int push(int data) {
	if (top == SIZE-1) {
		printf("stack overflow!\n");
		return -1;
	}
	else {
		stack[++top] = data;
		return 0;

	}
}
int pop(void) {
	if (top == -1) {
		printf("statc underflow! \n");
		return -1;
	}
	return stack[top--];
}
int main(void) {
	printf("%d\n", pop());

	return 0;
}
