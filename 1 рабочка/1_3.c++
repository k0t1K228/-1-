#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int b, c;
    double x;
    cout << "Практическая №1" << endl;
    cout << "1.3 <<Уравнение>>. Для любых введённых с клавиатуры b и c решить уравнение вида bx + c = 0." << endl;
    cout << "Введите b и c: " << endl;
    cin >> b >> c;
    setlocale(0, "");
    if (b != 0) {
        x = -c / b;
        cout << "X равен =" << x << endl;
    }
    else if (b == 0 and c == 0) {
        cout << "Уравнение имеет бесконечно много решений" << endl;
    }
    else if (b == 0 and c != 0) {
        cout << "Корней нет" << endl;
    }

    return 0;
}