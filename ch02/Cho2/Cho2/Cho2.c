#include<stdio.h>
#define SIZE 11 //������ �� ���� �־�����.
int main(void) {
	char a[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };//'\0'-> ���ڿ�(���ڸ� ���������� ����)�� ��ǥ��
	int index, i;
	char value; //������ ��
	printf("���� ��ġ : ");
	scanf_s("%d", &index);//�Է¹���(4�� �Է��ϸ� �Է¹��ۿ� 4�� �����ִ�.)
	//���۴� �����͸� ��� ������ �ִµ�,�̴� ��ǻ��ó���ӵ��� ����� �Է� �ӵ� �ؼ� 
	getchar();//�Է� ���� 
	printf("���� Data : ");
	scanf_s("%c", &value, 1);
	getchar(); //�Է� ����
/*
	i = SIZE - 1;
	while (i > index) {
		a[i] = a[i - 1]; //a[9]�� a[10]�� ���� 
		i--;
	}
*/
	for (int i = SIZE - 1; i > index; i--) {
		a[i] = a[i - 1];
	}

	a[SIZE - 1] = '\0';//���ڿ� ���� ǥ�� 
	a[index] = value;
	printf("���� ��� : %s\n", a);

	return 0;
}