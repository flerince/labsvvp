#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	printf("Введите размер файла в байтах \n"); 
	scanf_s("%d", &a);
	printf("Размер файла в килобайтах (целое значение): %1.0f \n", trunc (a/1024) );
	return 0;
}