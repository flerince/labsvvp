#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	printf("Введите значения переменных a, b и c через пробел \n");
	scanf_s("%d%d", &a, &b);
	a = a + b; 
	b = a - b; 
	a = a - b;
	printf("Поменяем значения переменных местами, a=%d, b=%d \n", a, b); // Выводим нужный ответ
}
