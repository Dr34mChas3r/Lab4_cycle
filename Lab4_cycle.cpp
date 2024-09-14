// Напишіть програму для обчислення суми арифметичної прогресії з першого до останнього елемента, використовуючи цикл.
// дано element1, element2
// знайти сума арефметичної прогресії;
//  cin >> 
// cout <<

#include <iostream>

using namespace std;

int main() {
	double element1, element2;
	
	cout << "Введіть значення першого елемента" << endl;
	cin >> element1;
	cout << "Введіть значення другого елемента" << endl;
	cin >> element2;

	double difference = element2 - element1;

	for (int i = element1; i <= element2;i++) {
		cout << i << endl;
	}
}