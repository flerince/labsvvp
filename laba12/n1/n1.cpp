#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int m, n;
    printf("Введите значение дня и месяца \n");
    scanf_s("%d%d", &n, &m);
    switch (n) {
    case 1:
        printf("Первое");
        break;
    case 2:
        printf("Второе");
        break;
    case 3:
        printf("Третье");
        break;
    case 4:
        printf("Четвертое");
        break;
    case 5:
        printf("Пятое");
        break;
    case 6:
        printf("Шестое");
        break;
    case 7:
        printf("Седьмое");
        break;
    case 8:
        printf("Восьмое");
        break;
    case 9:
        printf("Девятое");
        break;
    case 10:
        printf("Десятое");
        break;
    case 11:
        printf("Одиннадцатое");
        break;
    case 12:
        printf("Двенадцатое");
        break;
    case 13:
        printf("Тринадцатое");
        break;
    case 14:
        printf("Четырнадцатое");
        break;
    case 15:
        printf("Пятнадцатое");
        break;
    case 16:
        printf("Шестнадцатое");
        break;
    case 17:
        printf("Семнадцатое");
        break;
    case 18:
        printf("Восемнадцатое");
        break;
    case 19:
        printf("Девятнадцатое");
        break;
    case 20:
        printf("Двадцатое");
        break;
    case 21:
        printf("Двадцать первое");
        break;
    case 22:
        printf("Двадцать второе");
        break;
    case 23:
        printf("Двадцать третье");
        break;
    case 24:
        printf("Двадцать четвертое");
        break;
    case 25:
        printf("Двадцать пятое");
        break;
    case 26:
        printf("Двадцать шестое");
        break;
    case 27:
        printf("Двадцать седьмое");
        break;
    case 28:
        printf("Двадцать восьмое");
        break;
    case 29:
        printf("Двадцать девятое");
        break;
    case 30:
        printf("Тридцатое");
        break;
    case 31:
        printf("Тридцать первое");
        break;
    }
    switch (m) {
    case 1:
        printf(" января");
        break;
    case 2:
        printf(" февраля");
        break;
    case 3:
        printf(" марта");
        break;
    case 4:
        printf(" апреля");
        break;
    case 5:
        printf(" мая");
        break;
    case 6:
        printf(" июня");
        break;
    case 7:
        printf(" июля");
        break;
    case 8:
        printf(" августа");
        break;
    case 9:
        printf(" сентября");
        break;
    case 10:
        printf(" октября");
        break;
    case 11:
        printf(" ноября");
        break;
    case 12:
        printf(" декабря");
        break;
    }
    return 0;
}