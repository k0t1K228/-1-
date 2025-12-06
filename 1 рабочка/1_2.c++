#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int a, b;
    cout << "Практическая №1" << endl;
    cout << "1.2 <<Арифметика>>. Ввести с клавиатуры два числа и найти их сумму, разность, произведение, и, если возможно, частное от деления одного на другое." << endl;
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    cout << "Сумма = " << a + b << endl;
    cout << "Разность = " << a - b << endl;
    cout <<"Умножение = " << a * b << endl;
    if (a != 0) {
        cout <<"Частное b / a = " << b / a << endl;
    }
    else {
        cout << " b / a Частного нет" << endl;
    }
    if (b != 0) {
        cout <<"Частное a/b = " << a / b << endl;
    }
    else {
        cout << " a/ b Частного нет" << endl;
    }
    
    return 0;
}
