#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], per=0, i, j, num=0, num2=0;
	printf("Введите числовые элементы массива так, что среди них было только два одинаковых \n");
		for (i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	for (i = 0; i < n; i++)
	
		for (j = i + 1; j < n - 1; j++) {
			if (a[i] == a[j]) {
				num = i;
				num2 = j;
				per = a[i];
			}
		}
	if ((per == 0) && (num == 0) && (num2 == 0))
		printf("Вы не ввели два одинаковых значения в массиве");
	else printf("Элементы a[%d] и a[%d] имеют одинаковое значение = %d", num, num2, per);
	return 0;
}