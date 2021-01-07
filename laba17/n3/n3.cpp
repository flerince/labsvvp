#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], min = 1000, i, num = 11;
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i = i + 2) 
		if (a[i] < min) {
			min = a[i];
			num = i;
	}
	printf("Минимальный элемент среди четных a[%d]=%d", num, min);
	return 0;
}