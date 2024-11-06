#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");

    int x, x2, x3, x4, x5, y;
    cout << "Введите x: "; cin >> x;

    x5 = x*x*x*x*x;
    x4 = x*x*x*x;
    x3 = x*x*x;
    x2 = x*x;

    y = 7*x5 + x4 - 2*x3 + 11*x2 - 2*x + 3;

    cout << "y = " << y << endl;

    return 0;
}