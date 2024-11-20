#include "func.h"
#include <cmath>
#include <algorithm> // Для std::min

// Реалізація функції повинна відповідати оголошенню в func.h
double FuncClass::FuncA(int n, double x) {
    double sum = 0.0;

    // Обмежуємо кількість членів до 3 або n, що менше
    int limit = std::min(n, 3);
    for (int i = 0; i < limit; ++i) {
        double term = (std::pow(-1, i) * std::tgamma(2 * i + 1)) /
                      ((1 - 2 * i) * std::tgamma(i + 1) * std::pow(4, i)) * std::pow(x, i);
        sum += term;
    }

    return sum;
}


