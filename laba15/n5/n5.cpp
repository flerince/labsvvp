#include <stdio.h>
#include <locale.h>
float Fact2(int N)
{
	int S = 1;
		while (N>0)
		{
			S = S * float(N);
			N = N - 2;
	}
	return S;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int X,N;
	printf("Введите число N (N>0) \n");
		scanf_s("%d", &N);
		X = Fact2(N);
        printf("N!! = %d , ", X);
	return 0;
}