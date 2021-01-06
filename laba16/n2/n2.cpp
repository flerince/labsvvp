#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a[100];
	int n, i, A,d;
	printf("Введите длину массива N (N>1), первый член массива А и знаменатель D арифм. прогрессии \n");
	scanf_s("%d%d%d", &n,&A,&d);
	if (n > 1) {
		for (i = 0; i < n; i++, a[0] = A)
			a[i] = a[i-1]*d;
		for (i = 0; i < n; i++)
			printf("Элемент массива номер %d - %d \n", i, a[i]);
	}
	return 0;
}
