#include <iostream> 

using namespace std;

double f1(double m) {
	double v;
	if (m >= 0)
		v = m * m;
	else {
		v = abs(m);
	}
	return v;
}
double f2(double& X)
{
	X = f1(X);
	return X;
}

int main() {
	setlocale(LC_ALL, "");

	int y, b;
	double x, result;
	cout << "Введите первое значение ";
	cin >> x;
	cout << "Введите количество ";
	cin >> y;
	cout << "Введите шаг ";
	cin >> b;

	for (int i = 1; i <= y; i++, x += b) {
		cout << "Результат " << f2(x) << "\n";
	}

	system("pause");
	return 0;
}