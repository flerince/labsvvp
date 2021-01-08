#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int a[n], i,k;
	float b[n], sum=0, temp=0;
	printf("Введите значения массива а \n");
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf_s("%i", &a[i]);
	}
	for (k=0; k<n; k++) {
		for (i = 0; i <= k; i++) {
			sum = sum + a[i];
			temp++;
		}
		b[k] = sum/temp;
		sum = 0;
		temp = 0;
	}
	printf("Новые значения массива: \n");
	for (i = 0; i < n; i++) {
		printf("b[%d] = %5.2f \n", i, b[i]);
	}
	return 0;
}