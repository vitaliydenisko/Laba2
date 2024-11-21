#include <iostream>
#include "func.h"

void testFuncA() {
    Func f;
    if (f.FuncA(3) == 1.5) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }
}

int main() {
    testFuncA();
    return 0;
}

