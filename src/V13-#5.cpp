#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");

    int n;
    cout << "Введите кол-во точек: "; cin >> n;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        double x,y;
        cout << "Введите координаты x, y: " << i + 1 << ":"; cin >> x >> y;
    
    if(x >= 0 && x <= 4 && y >= 0 && y <= -1/2*x + 4
    || x <= 0 && x >= -4 && (x*x + y*y) <= 64
    || x >= 0 && y <= 0 && (x*x + y*y <= 64)) {
        count++;
        }
    }

    cout << "Кол-во точек в заштрихованной области: " << count << endl;

    return 0;
}
