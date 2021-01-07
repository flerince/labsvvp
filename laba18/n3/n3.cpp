#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int a[n], i, nech=0;
	printf("Введите значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%i", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 2 != 0)
			nech = a[i];
	}
	if (nech != 0) {
		for (i = 0; i < n; i++) {
			if (a[i] % 2 != 0)
				a[i] = a[i] + nech;
		}
	}
	printf("Новые значения массива: \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \n", i, a[i]);
	}
	return 0;
}