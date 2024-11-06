
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    int maxNum = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    (maxNum % 2 == 0) 
        ? cout << "Квадраты чисел: " << a * a << ", " << b * b << ", " << c * c << endl 
        : cout << "Сумма первого и второго числа: " << a + b << endl;

    return 0;
}
