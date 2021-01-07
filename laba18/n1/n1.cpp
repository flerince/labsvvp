#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int a[n], b[n], c[n],i;
	printf("Введите значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	printf("Введите значения массива b \n");
	for (i = 0; i < n; i++) {
		printf("b[%d] : ", i);
		scanf_s("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		a[i] = b[i];
	}
	for (i = 0; i < n; i++) {
		b[i] = c[i];
	}
	printf("Новые значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : %d \n", i, a[i]);
	}
	printf("Новые значения массива b \n");
	for (i = 0; i < n; i++) {
		printf("b[%d] : %d \n", i, b[i]);
	}
	return 0;
}