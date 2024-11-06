#include <iostream>
#define func(a) 7*a*a*a*a*a + a*a*a*a - 2*a*a*a + 11*a*a - 2*a + 3
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");

    int a;
    cout << "Введите x:"; cin >> a;

    cout << func(a) << endl;

    return 0;
}

