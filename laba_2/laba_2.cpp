#include <iostream>
#include <math.h>

using namespace std;

void F1(double* x, double n)
{
    setlocale(LC_ALL, "Rus");
    int n1 = 0;
    for (int i = 0; i < n; i++)
        if (x[i] > 0)
            n1++;
    double* m1 = new double[n1];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > 0)
        {
            m1[j] = x[i];
            j++;
        }
    }
    cout << "Положительные: ";
    for (int j = 0; j < n1; j++)
    {
        cout << m1[j] << " ";
    }
    int k1 = 0;
    for (int i = 0; i < n; i++)
        if (x[i] < 0)
            k1++;
    double* l1 = new double[k1];
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < 0)
        {
            l1[h] = x[i];
            h++;
        }
    }
    cout << "Отрицательные: ";
    for (int h = 0; h < k1; h++)
    {
        cout << l1[h] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите кол-во чисел: ";
    cin >> n;
    double* m = new double[n];
    cout << "Введите числа в массиве: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    F1(m, n);
    system("pause");
    return 0;
}