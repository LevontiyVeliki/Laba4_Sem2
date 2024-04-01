#include <iostream>

using namespace std;

class Complex {
public:
	double a;
	double b;
};

class Complex_operation : public Complex {
public:
	void Complex_minus(double x1, double y1, double x2, double y2) {
		double z1, z2;
		z1 = x1 - y1;
		z2 = x2 - y2;
		if (z2 < 0) {
			cout << z1 << z2 << "i";
		}
		else {
			cout << z1 << "+" << z2 << "i";
		}
	}
	void Complex_plus(double x1, double y1, double x2, double y2) {
		double z1, z2;
		z1 = x1 + y1;
		z2 = x2 + y2;
		if (z2 < 0) {
			cout << z1 << z2 << "i";
		}
		else {
			cout << z1 << "+" << z2 << "i";
		}
	}
	void Complex_multiplication(double x1, double y1, double x2, double y2) {
		double z1, z2;
		z1 = (x1 * x2 - y1 * y2);
		z2 = (x1 * y2 + y1 * x2);
		if (z2 < 0) {
			cout << z1 << z2 << "i";
		}
		else {
			cout << z1 << "+" << z2 << "i";
		}
	}
	void Print() {
		cout << " ";
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Complex_operation x, y, z;
	int n;
	cout << "Введите значения a и b - действительных частей первого комплексного числа: ";
	cin >> x.a >> x.b;
	cout << "Введите значения a и b - действительных частей второго комплексного числа: ";
	cin >> y.a >> y.b;
	cout << "Выберите интересующую операцию (1 - сложение, 2 - вычитание, 3 - умножение): ";
	cin >> n;
	switch (n)
	{
	case 1:
		z.Complex_plus(x.a, y.a, x.b, y.b);
		break;
	case 2:
		z.Complex_minus(x.a, y.a, x.b, y.b);
		break;
	case 3:
		z.Complex_multiplication(x.a, y.a, x.b, y.b);
		break;
	default:
		cout << "Вы ввели неправильную операцию.";
		break;
	}
}

