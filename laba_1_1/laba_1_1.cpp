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

int main() {
	setlocale(LC_ALL, "");

	double x, y, b;
	cout << "Введите первое значение ";
	cin >> x;
	cout << "Введите количество ";
	cin >> y;
	cout << "Введите шаг ";
	cin >> b;

	for (int i = 1; i <= y; i++, x += b) {
		cout << "Результат " << f1(x) << " к значению " << x << "\n";
	}

	system("pause");
	return 0;
}