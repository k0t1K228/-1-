#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double x, a, w;
    cout << "Практическая №2" << endl;
    cout << "2.1 <Разветвление>. Для произвольных x и a вычислить систему w = a*ln|x|, x < 1 и sqrt(a - x^2), |x| >= 1." << endl;
    cout << "Введите x, a: ";
    cin >> x >> a;
    if (abs(x) < 1) {
        if (x != 0) {
            w = a * log(abs(x));
            cout << "w = " << w << endl;
        }
        else {
            cout << "Логарифм не определён" << endl;
        }
    }
    else {
        if ((a - x * x) >= 0) {
            w = sqrt(a - x * x);
            cout << "w = " << w << endl;
        }
        else {
            cout << "Корень отрицательный" << endl;
        }
    }
    return 0;
}