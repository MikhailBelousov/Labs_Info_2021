#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout.setf(ios::fixed);
	setlocale(LC_ALL, "Russian");
	float a1 = 1000, b1 = 0.0001, x1, y1, d1, e1, f1, g1, h1;
	double a2 = 1000, b2 = 0.0001, x2, y2, d2, e2, f2, g2, h2;

	h1 = a1 + b1;
	y1 = pow(a1 + b1, 3);
	d1 = pow(a1, 3);
	e1 = 3 * pow(a1, 2) * b1;
	f1 = 3 * a1 * pow(b1, 2);
	g1 = pow(b1, 3);
	x1 = (y1 - (d1 + e1)) / (f1 + g1);

	h2 = a2 + b2;
	y2 = pow(a2 + b2, 3);
	d2 = pow(a2, 3);
	e2 = 3 * pow(a2, 2) * b2;
	f2 = 3 * a2 * pow(b2, 2);
	g2 = pow(b2, 3);
	x2 = (y2 - (d2 + e2)) / (f2 + g2);
	cout << " При использовании азличных типов данных результат равен: " << endl << endl;
	cout << "                  FLOAT                       DOUBLE" << endl << endl;
	cout << "a+b=          " << h1 << "               " << h2 << endl;
	cout << "(a+b)^3=      " << y1 << "         " << y2 << endl;
	cout << "a^3=          " << d1 << "         " << d2 << endl;
	cout << "3*a^2*b=      " << e1 << "                " << e2 << endl;
	cout << "3*a*b^2=      " << f1 << "                  " << f2 << endl;
	cout << "Числитель=    " << y1 - (d1 + e1) << "                 " << y2 - (d2 + e2) << endl;
	cout << "Знаменатель=  " << f1 + g1 << "                  " << f2 + g2 << endl;
	cout << "Ответ=        " << x1 << "            " << x2 << endl;





	return 0;
}


