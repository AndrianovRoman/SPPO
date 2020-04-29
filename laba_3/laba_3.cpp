#include <iostream>

using namespace std;

struct element {
	double value;
	element* pointer;
	element() {
		value = 0;
		pointer = NULL;
	}
};
void f1(element*& one, element*& dwa) {
	element* p = one;
	element* l = NULL;
	element* p1 = NULL;
	while (p != NULL) {
		if (p->value < 0) {
			if (l != NULL) {
				l->pointer = p->pointer;
				if (dwa != NULL) {
					p1->pointer = p;
					p1 = p1->pointer;
					p = p->pointer;
					p1->pointer = NULL;
				}
				else {
					dwa = p;
					p1 = dwa;
					p = p->pointer;
					p1->pointer = NULL;
				}
			}
			else {
				dwa = p;
				p1 = dwa;
				p = p->pointer;
				dwa->pointer = NULL;
				one = p;
			}
		}
		else {
			l = p;
			p = p->pointer;
		}
	}
}
void InputList(element*& one, int N) {
	element* p = NULL;
	int i = 0;
	cout << "Введите каждый элемент ";
	while (i < N) {
		element* p1 = new element();
		cin >> p1->value;
		if (one == NULL) {
			one = p1;
			p = p1;
		}
		else {
			p->pointer = p1;
			p = p1;
		}
		i++;
	}
}
void OutputList(element* l) {
	while (l != NULL) {
		cout << l->value << " ";
		l = l->pointer;
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "rus");

	element* first = NULL;
	element* secound = NULL;
	int N;

	cout << "Введите длину списка ";
	cin >> N;

	InputList(first, N);
	OutputList(first);
	f1(first, secound);
	OutputList(first);
	OutputList(secound);

	system("pause");
	return 0;
}