#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    double h, R, r, l;
    cout << "Практическая №1" << endl;
    cout << "1.6 <<Конус>>. Вычислить объём и полную поверхность усечённого конуса." << endl;
    cout << "Введите h, R, r, " << endl;
    cin >> h >> R >> r;
    l = sqrt(h * h + r * r);
    double V = 1.0 / 3.0 * 3.14 * h * (R * R + R * r + r * r);
    double S = 3.14 * (R * R + (R + r) * l + (r * r));
    if ((h > 0 and R > 0 and r > 0 and l > 0) and (R > r)) {
        cout << "V = " << V << endl;
        cout << "S = " << S << endl;
    }
    else {
        cout << "конуса не существует" << endl;
    }

    return 0;
}