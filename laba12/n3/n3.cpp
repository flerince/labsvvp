#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int m=0, n;
    printf("Введите число от 10 до 40 включительно \n");
    scanf_s("%d", &n);
    switch (n) {
    case 10:
        printf("Десять");
        break;
    case 11:
        printf("Одиннадцать");
        break;
    case 12:
        printf("Двенадцать");
        break;
    case 13:
        printf("Тринадцать");
        break;
    case 14:
        printf("Четырнадцать");
        break;
    case 15:
        printf("Пятнадцать");
        break;
    case 16:
        printf("Шестнадцать");
        break;
    case 17:
        printf("Семнадцать");
        break;
    case 18:
        printf("Восемнадцать");
        break;
    case 19:
        printf("Девятнадцать");
        break;
    case 20:
        printf("Двадцать");
        break;
    case 21:
        printf("Двадцать одно");
        break;
    case 22:
        printf("Двадцать два");
        break;
    case 23:
        printf("Двадцать три");
        break;
    case 24:
        printf("Двадцать четыре");
        break;
    case 25:
        printf("Двадцать пять");
        break;
    case 26:
        printf("Двадцать шесть");
        break;
    case 27:
        printf("Двадцать семь");
        break;
    case 28:
        printf("Двадцать восемь");
        break;
    case 29:
        printf("Двадцать девять");
        break;
    case 30:
        printf("Тридцать");
        break;
    case 31:
        printf("Тридцать одно");
        break;
    case 32:
        printf("Тридцать два");
        break;
    case 33:
        printf("Тридцать три");
        break;
    case 34:
        printf("Тридцать четыре");
        break;
    case 35:
        printf("Тридцать пять");
        break;
    case 36:
        printf("Тридцать шесть");
        break;
    case 37:
        printf("Тридцать семь");
        break;
    case 38:
        printf("Тридцатать восемь");
        break;
    case 39:
        printf("Тридцать девять");
        break;
    case 40:
        printf("Сорок");
        break;
    }
    if (((n > 9) && (n < 21)) || ((n > 24) && (n <= 30)) || ((n > 34) && (n <= 40))) m = 1;
    if (n == 21 || (n == 31)) m = 2;
    if (((n > 21) && (n <= 24)) || ((n > 31) && (n <= 34))) m = 3;
    switch (m) {
    case 1:
        printf(" учебных заведений");
        break;
    case 2:
        printf(" учебное заведение");
        break;
    case 3:
        printf(" учебных заведения");
        break;
    }
    return 0;
}