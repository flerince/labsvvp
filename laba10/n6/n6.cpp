#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите стороны треугольника a,b,c \n");
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a * a + b * b == c * c) || (c * c + b * b == a * a) || (a * a + c * c == b * b))
		printf("Выражение «Треугольник со сторонами a, b, c является прямоугольным» истинно");
	else printf("Выражение «Треугольник со сторонами a, b, c является прямоугольным» ложно");
	return 0;
}