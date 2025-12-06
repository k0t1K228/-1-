#include <cmath>
#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int a, b, c;
    double x1, x2, D;
    cout << "Практическая №1" << endl;
    cout << "1.4 <<Ещё уравнение>>. Для любых введённых с клавиатуры a, b, c решить уравнение вида ax^2 + bx + c = 0." << endl;
    cout << "Введите a b c: " << endl;;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0 and c == 0) {
            cout << "Уравнение имеет бесконечно много решений" << endl;
        }
        else if (b == 0) {
            cout << "Решений нет" << endl;
        }
        else {
            x1 = -c / b;
            cout << "Уравнение имеет 1 корень : " << x1 << endl;
        }
    }
    else {
        if (D < 0) {
            cout << "Решений нет" << endl;
        }
        else if (D == 0) {
            x1 = -b / 2 * a;
            cout << "Уравнение имеет один корень : " << x1 << endl;
        }
        else {
            x1 = (-b + sqrt(D)) / 2 * a;
            x2 = (-b - sqrt(D)) / 2 * a;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}