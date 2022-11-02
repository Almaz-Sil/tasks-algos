#include <iostream>
#include <cmath>

using namespace std;

double Disc(double a, double b, double c) {
	return sqrt(b * b - 4 * a * c);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	double D;
	double x1, x2;
	cout << "введите a:";
	cin >> a;
	cout << "\n" << "введите b:";
	cin >> b;
	cout << "\n" << "введите c:";
	cin >> c;

	if (a != 0) {
		D = Disc(a, b, c);
		if (D > 0) {
			x1 = (-b - D) / (2 * a);
			x2 = (-b + D) / (2 * a);
			cout << "x1: " << x1 << "\n" << "x2: " << x2;
		}
		else if (D == 0) {
			x1 = (-b - D) / (2 * a);
			cout << "x: " << x1;
		}
		else {
			cout << "корней нет";
		}
	}
	else {
		x1 = -c / b;
		cout << "x: " << x1;
	}
}