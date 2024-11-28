#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double result = 0.0;
    double inner_sum = 0.0;

    // 1. Метод 1: Використання вкладених циклів while
    int n = 18, k;
    result = 0.0;
    while (n <= 20) {
        k = n;
        inner_sum = 1.0; // Ініціалізуємо як 1 для уникнення множення на 0
        while (k <= 20) {
            inner_sum *= sqrt(1.0 - k / n) / (2 * pow(n, 2) + pow(k, 2));
            k++;
        }
        result += inner_sum;
        n++;
    }
    cout << "Результат з використанням вкладених циклів while: " << result << endl;

    // 2. Метод 2: Використання вкладених циклів do-while
    n = 18;
    result = 0.0;
    do {
        k = n;
        inner_sum = 1.0; // Ініціалізуємо як 1 для уникнення множення на 0
        do {
            inner_sum *= sqrt(1.0 - k / n) / (2 * pow(n, 2) + pow(k, 2));
            k++;
        } while (k <= 20);
        result += inner_sum;
        n++;
    } while (n <= 20);
    cout << "Результат з використанням вкладених циклів do-while: " << result << endl;

    // 3. Метод 3: Використання вкладених циклів for (інкремент)
    result = 0.0;
    for (n = 18; n <= 20; n++) {
        inner_sum = 1.0; // Ініціалізуємо як 1 для уникнення множення на 0
        for (k = n; k <= 20; k++) {
            inner_sum *= sqrt(1.0 - k / n) / (2 * pow(n, 2) + pow(k, 2));
        }
        result += inner_sum;
    }
    cout << "Результат з використанням вкладених циклів for (інкремент): " << result << endl;

    // 4. Метод 4: Використання вкладених циклів for (декремент)
    result = 0.0;
    for (n = 20; n >= 18; n--) {
        inner_sum = 1.0; // Ініціалізуємо як 1 для уникнення множення на 0
        for (k = 20; k >= n; k--) {
            inner_sum *= sqrt(1.0 - k / n) / (2 * pow(n, 2) + pow(k, 2));
        }
        result += inner_sum;
    }
    cout << "Результат з використанням вкладених циклів for (декремент): " << result << endl;

    return 0;
}