#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a[100];
	int n, i;
	printf("Введите длину массива N (N>0)\n");
	scanf_s("%d", &n);
    if (n > 0) {
        for (i = 0; i < n; i++) {
            printf("a[%d] : ", i);
            scanf_s("%i", &a[i]);
        }
        for (i = 0; i < n; i = i + 2)
            printf("%d \n", a[i]);
        for (i = n - (n % 2) - 1; i >= 1; i = i - 2)
            printf("%d \n", a[i]);
    }
	return 0;
}