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
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < n / 2; i++) {
			printf("%d \n", a[i]);
			printf("%d \n", a[n - i - 1]);
		}
		if (n % 2 != 0) 
			printf("%i\n", a[(n / 2)]);
	}
	return 0;
}
