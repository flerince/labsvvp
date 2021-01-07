#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], d,i,k=0;
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%i", &a[i]);
	}
	d = a[1] - a[0];
	for (i = 0; i < n; i++) {
		if ((a[i + 1] - a[i]) == d)
			k++;
	}
	if (k == n)
		printf("Массив является арифмитической прогрессией, разность = %d", d);
	else printf("0");
	return 0;
}