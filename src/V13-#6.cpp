#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");

    int n;
    cout << "Введите n: "; cin >> n;

    double total = 0;
    for (int i = 1; i <= n; i++) {
        total += 1 / (5 * (total + i));

    }

    cout << "S = " << total << endl;
    

    return 0;
}