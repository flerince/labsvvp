#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int N, x;
    printf("Введите номер дня в году (0<x<366) день недели N (0<N<8), где N=1 - понедельник, ... N = 7 - воскресенье \n");
    scanf_s("%d%d", &x,&N);
    if (x > 0 && x < 366) {
        x = ((x + N - 2) % 7) + 1;
        switch (x)
        {
        case 7:
            printf("День недели - воскресенье\n");
            break;
        case 1:
            printf("День недели - понедельник\n");
            break;
        case 2:
            printf("День недели - вторник\n");
            break;
        case 3:
            printf("День недели - среда\n");
            break;
        case 4:
            printf("День недели - четверг\n");
            break;
        case 5:
            printf("День недели - пятница\n");
            break;
        case 6:
            printf("День недели - суббота\n");
            break;
        }
    }
    else printf("Введен неверный номер дня года");
    return 0;
}