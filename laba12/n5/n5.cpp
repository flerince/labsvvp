#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int N, a, b, c;
    printf("Введите год \n");
    scanf_s("%d", &N);
printf("Вы ввели год ");
a = N % 10;
b = N % 12;
c = ((N + 8) % 12);
switch (a) {
case 0:  printf("бел");
    break;
case  1:  printf("бел");
    break;
case   2:  printf("черн");
    break;
case   3:  printf("черн");
    break;
case   5:  printf("зелён");
    break;
case   4:  printf("зелён");
    break;
case   7:  printf("красн");
    break;
case   6:  printf("красн");
    break;
case   9:  printf("жёлт");
    break;
case   8:  printf("жёлт");
    break;
}
if ((b >= 0 && b<=5) || (b >= 9 && b <= 11)) printf("ой ");
if (b >= 6 && b <= 8) printf("ого ");
switch (c) {
case 0: printf("крысы");
    break;
case 1: printf("коровы");
    break;
case 2: printf("тигра");
    break;
case 3: printf("зайца");
    break;
case 4: printf("дракона");
    break;
case 5: printf("змеи");
    break;
case 6: printf("лошади");
    break;
case 7: printf("овцы");
    break;
case 8: printf("обезьяны");
    break;
case 9: printf("курицы");
    break;
case 10: printf("собаки");
    break;
case  11: printf("свиньи");
    break;
}
return 0;
}
