#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите стороны треугольника a,b,c \n");
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a<(b+c)) && (b<(a+c)) && (c<(a+b)))
		printf("Выражение «Существует треугольник со сторонами a, b, c» истинно");
	else printf("Выражение «Существует треугольник со сторонами a, b, c» ложно");
	return 0;
}