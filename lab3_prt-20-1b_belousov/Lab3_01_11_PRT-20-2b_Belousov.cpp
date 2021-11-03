#include <iostream>
#include <math.h>


using namespace std;

double fact(int f) // функ-я факториала
{
	if (f == 1 || f == 0) return 1;
	else return  f * fact(f - 1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	double x, y, A = 0.1, B = 1.0, summn = 0, summe = 0, E, k;

	int i, j, n = 10;

	k = (B - A) / 10.0; // шаг 
	cout << "Результаты вычислений:  " << endl;

	for (x = A; x <= B; x += k) {  //цикл для выч. значения функ-и "у"
		y = sin(x);
		summn = x;

		i = 1;
		do //цикл для выч. суммы с точностью при n шагов
		{
			summn += pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
			i++;
		} while (i <= n);

		summe = x;
		j = 1;
		do //цикл для выч. суммы с точностью при эпсилон
		{

			summe += pow(-1, j) * pow(x, 2 * j + 1) / fact(2 * j + 1);
			j++;
			E = y - fabs(summe); //вычисление точности
		} while (E > 0.0001);



		cout << "x= " << x << "   SN= " << summn << "   SE = " << summe << "   Y = " << y << endl;
	}


	return 0;
}