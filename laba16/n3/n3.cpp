#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a[100];
	int n, i, A, B;
	printf("Введите длину массива N (N>2), целые числа A и B\n");
	scanf_s("%d%d%d", &n, &A, &B);
	if (n > 2) {
		a[0] = A;
		a[1] = B;
		a[2] = A + B;
		for (i = 3; i < n; i++)
			a[i] = 2 * a[i - 1];
		for (i = 0; i < n; i++)
			printf("Элемент массива номер %d - %d \n", i, a[i]);
	}
	return 0;
}