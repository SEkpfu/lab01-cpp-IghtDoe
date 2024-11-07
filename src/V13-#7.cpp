#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"RU");
    int n;
    cout << "Введите количество n-цифр: "; cin >> n;
    int sum_with_7 = 0;
    int count_n_8 = 0;
    int product_n_with_13 = 1;

    for(int i = 0; i < n; i++) {
        int input;
        cout << "Введите любые цифры в том кол-ве, которое вы указали: "; cin >> input;
        if(input % 10 == 7)
            sum_with_7 += input;
        if(input & 8 == 0)
            count_n_8++;
        if(input % 100 == 13)
            product_n_with_13 *= input;
    }

    cout << "Сумма чисел, заканчивающихся на 7: " << sum_with_7 << endl;
    cout << "Кол-во чисел, кратных 8: " << count_n_8 << endl;
    cout << "Произведения чисел, начинающихся на 13: " << product_n_with_13 << endl;

    return 0;
}