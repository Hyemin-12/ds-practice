#include<stdio.h>
int main(void) {
	//char c[] = { 'P','r','a','c','t','i','c','e',' ','m','a','k','e','s',' ','p','e','r','f','e','t','.' };
	char c2[] = { "Practice makes perfect." };
	for (int i = 0; i < 23; i++) {
		printf("%c", c2[i]);
	}
	printf("\n");

	for (int i = 23; i >= 0; i--) {
		printf("%c", c2[i]);
	}
	printf("\n");
	char res[5][10];
	//char s = 'A';
	for (int i = 1; i <= 5; i++) {
		res[i][0] = 'A';
		for (int j = 1; j <= (i-1)+(i); j++) {
			res[i][j] = res[i][0]++;
				printf("%c", res[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 5; i++) {
		res[i][0] = 'A';
		for (int j = 1; j <= (i - 1) + (i); j++) {
			res[i][j] = res[i][0]++;
			if (res[i] == res[j]) {
				printf("%c\n", res[i][j]);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

		return 0;

}