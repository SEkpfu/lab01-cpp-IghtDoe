#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"RU");

    int a, b, c, w;
    cout <<"Введите a: "; cin >> a;

    if(a >= -4) {
        b = sqrt( 1 + pow(a,2) ) / abs(a - 1) + 1;
        cout << "c: " << b << endl;
    }
    
    if(-10 < a && a < -4) {
        c = sqrt(abs(a - 5));
        cout << "c: " << c << endl;
    }

    if( a <= -10 ) {
        w = exp(1/-a);
        cout << "c: " << w << endl;
    }

    return 0;
}