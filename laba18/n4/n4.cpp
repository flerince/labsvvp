#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int a[n], i, nmin, nmax, min=1000, max=-1000;
	printf("Введите значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%i", &a[i]);
	}

	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			nmin = i;
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			nmax = i;
		}
	}
	printf("%d %d", nmin, nmax);
	if (nmin < nmax) {
		for (i = nmin+1; i < nmax; i++) {
			a[i] = 0;
		}
	}
	else {
		for (i = nmax+1; i < nmin; i++) {
			a[i] = 0;
		}
	}
	printf("Новые значения массива: \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \n", i, a[i]);
	}
	return 0;
}