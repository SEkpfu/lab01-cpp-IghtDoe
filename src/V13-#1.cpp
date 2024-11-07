#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");

    int v, h, r;
    double pi = 3.14159;

    cout <<"Введите высоту и радиус цилиндра: "; cin >> h >> r;

    v = pi * r*r * h;

    cout <<"Объем цилиндра: " << v;

    return 0;
}