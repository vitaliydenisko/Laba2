#include <iostream>
#include "func.h"

int main() {
    FuncClass obj;

    int n;
    double x;

    // Запитуємо користувача на введення параметрів
    std::cout << "Enter the number of terms (n): ";
    std::cin >> n;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Викликаємо функцію FuncA з переданими аргументами
    double result = obj.FuncA(n, x);

    // Виводимо результат
    std::cout << "Result: " << result << std::endl;

    return 0;
}
