#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите значения переменных a, b и c через пробел \n");
	scanf_s("%d%d%d", &a, &b, &c);
	b = b + a;
	a = b - a;
	b = b - a;
	b = b + c;
	c = b - c;
	b = b - c;
	printf("Поменяем значения переменных местами, a=%d, b=%d, c=%d \n", a, b, c); // Выводим нужный ответ
}