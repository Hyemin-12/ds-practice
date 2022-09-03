#include<stdio.h>

void ShellSort(int a[], int n) {
    int i, j, t, key;

    for (t = n / 2; t >= 1; t /= 2) {
        for (i = t; i < n; i++) {
            key = a[i];
            for (j = i - t; j >= 0; j -= t) {
                if (key >= a[j]) break;
                else a[j + t] = a[j];
            }
            a[j + t] = key;
        }
    }
}

int main(void) {
    int a[] = { 7, 12, 30, 1, 8, 10, 16, 32, 28, 4, 2, 15, 18 };
    int i, n = sizeof(a) / sizeof(int);

    printf("정렬 전 : ");
    for (i = 0; i < n; i++) printf("%d  ", a[i]);
    printf("\n");

    ShellSort(a, n);
    
    printf("쉘 정렬 후 : ");
    for (i = 0; i < n; i++) printf("%d  ", a[i]);
    printf("\n");

    return 0;
}