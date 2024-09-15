
#include <iostream>
using namespace std;

int main() {
    double a1, difference, count;
    double sum = 0;

    cout << "Введіть перший член прогресії: ";
    cin >> a1;
    cout << "Введіть різницю прогресії: ";
    cin >> difference;
    cout << "Введіть кількість членів: ";
    cin >> count;

    for (double i = 1; i <= count; ++i) {
        sum += a1 + difference * (i - 1);
    } 

    cout << "Сума арифметичної прогресії: " << sum << endl;

}