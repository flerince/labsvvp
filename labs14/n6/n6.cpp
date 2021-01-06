#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian"); // Поддержка русского
    const int N = 7;// Константа N
    int i=0, j, min, buf; // Объявление переменных
    int a[N] = {214, -8, -100, 30, 104, 54, 612}; // Неотсортированный массив
    while (i < N - 1) {
        j = i + 1;
        min = i;
        while (j < N) {
            if (a[j] < a[min])
                min = j;
                j++;
        }
        buf = a[i];
        a[i] = a[min];
        a[min] = buf;
        i++;
    }
        printf("Отсортированный массив: "); // Вывод надписи на экран
        for (i = 0; i < N; i++) // Цикл - от a[0] до a[N-1], т.к. индексация начинается с нуля
            printf("%d ", a[i]); // Выводить уже измененный массив
        return 0;
    }
