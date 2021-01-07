#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], max, i, num = 0;
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < n; i++)
		if ((a[i]>a[i+1]) && (a[i]>a[i-1])) {
			max = a[i];
			num = i;
		}
	printf("Последний максимальный элемент среди соседей: a[%d]=%d", num, max);
	return 0;
}