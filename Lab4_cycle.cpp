// Напишіть програму для обчислення суми арифметичної прогресії з першого до останнього елемента, використовуючи цикл.
// Приклад 1 = Вхідні дані 3,3,3 Вихідні 18
// Приклад 2 = Вхідні дані 2 3 4 Вихідні 26
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