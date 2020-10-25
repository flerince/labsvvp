#include <stdio.h>
#include <locale.h>
#include <math.h> 

main()
{
	setlocale(LC_ALL, "Russian"); // Возможность русского языка
	float x, S; // Вещественные переменные 
	int k; 
	printf("Введите число x и число A \n"); // Просим ввести числа
	scanf_s("%f%f", &x, &S); // Вводим два числа
	k = 1;
	while ( (x*k) <= (S/k) )
	{ k++ ;
    }
	printf("Наименьшее целое К = %d", k);
}
