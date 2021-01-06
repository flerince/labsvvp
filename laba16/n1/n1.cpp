#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a[100];
	int n,i,j=1;
	printf("Введите число N (N>0) \n");
	scanf_s("%d", &n);
	if (n > 0) {
		for (i = 0; i < n; i++, j = j + 2)
			a[i] = j;
		for (i = 0; i < n; i++)
			printf("Элемент массива номер %d - %d \n",i,a[i]);
	}
	return 0;
}