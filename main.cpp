#include <iostream>
#include "func.h"

int main() {
    FuncClass funcObj;

    int n;
    double x;

    // Введення параметрів
    std::cout << "Enter the number of terms (n): ";
    std::cin >> n;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Виклик функції
    double result = funcObj.FuncA(n, x);

    // Вивід результату
    std::cout << "Result of the series calculation: " << result << std::endl;

    return 0;
}
