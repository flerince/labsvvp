#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите число х \n");
	scanf_s("%d", &x);
	if (x != 0) {
		if (x < 0) {
			if (x % 2 == 0) printf("Вы ввели отрицательное четное число \n");
			else printf("Вы ввели отрицательное нечетное число \n");
		}
		else if (x % 2 == 0) printf("Вы ввели положительное четное число \n");
		else printf("Вы ввели положительное нечетное число \n");
	}
	else printf("Вы ввели нулевое число \n");
}
