#include <stdio.h>
#include <locale.h>
#include <math.h> 

main()
{
	setlocale(LC_ALL, "Russian"); // ����������� �������� �����
	float x, S; // ������������ ���������� 
	int k; 
	printf("������� ����� x � ����� A \n"); // ������ ������ �����
	scanf_s("%f%f", &x, &S); // ������ ��� �����
	k = 1;
	while ( (x*k) <= (S/k) )
	{ k++ ;
    }
	printf("���������� ����� � = %d", k);
}
