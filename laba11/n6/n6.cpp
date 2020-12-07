#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите число х (0<x<1000)\n");
	scanf_s("%d", &x);
	if ((x > 0) && (x < 1000)) {
		if (x < 10) {
			if (x % 2 == 0) printf("Вы ввели однозначное четное число \n");
			else printf("Вы ввели однозначное нечетное число \n");
		}
		else if (x < 100)
		{
			if (x % 2 == 0) printf("Вы ввели двузначное четное число \n");
			else printf("Вы ввели двузначное нечетное число \n");
		}
		else if (x < 1000)
		{
			if (x % 2 == 0) printf("Вы ввели трехначное четное число \n");
			else printf("Вы ввели трехзначное нечетное число \n");
		}
	}
	else printf("Введенное число не соответствует условиям \n");
	return 0;
}
