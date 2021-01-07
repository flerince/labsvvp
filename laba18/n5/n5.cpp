#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int a[n], i, temp, ch;
	printf("Введите значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%i", &a[i]);
	}
	ch = a[0];
	for (i = 0; i < n; i++) {
		if ((a[0] > a[i]) && (a[0] < a[i + 1]))
			temp = i;
	}
	for (i = 1; i < temp+1; i++) {
		a[i - 1] = a[i];
	}
	a[temp] = ch;
	printf("Новые значения массива: \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \n", i, a[i]);
	}
	return 0;
}