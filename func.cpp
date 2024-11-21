#include "func.h"
#include <cmath>
#include <algorithm>

double FuncClass::FuncA(int n, double x) {
    double sum = 0.0;
    int limit = std::min(n, 3);
    for (int i = 0; i < limit; ++i) {
        double term = (std::pow(-1, i) * std::tgamma(2 * i + 1)) /
                      ((1 - 2 * i) * std::tgamma(i + 1) * std::pow(4, i)) * std::pow(x, i);
        sum += term;
    }
    return sum;
}

