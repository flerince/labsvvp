#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,a,b,c;
	printf("Введите целое положительное число A\n");
	scanf_s("%d", &A);
	if (A >= 100 && A<=999) {
		c = A % 10;
		a = A / 100;
		b = (A / 10)-(a * 10);
		if ((a<b && b < c) || (a>b && b>c))
			printf("Выражение «Данное число является четным двузначным» истинно");
		else printf("Выражение «Данное число является четным двузначным» ложно");
	}
	else printf("Введено не трехзначное число");
	return 0;
}
