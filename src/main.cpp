#include "../include/fibonacci.h"
#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    for (int i = 0;i <= n; i++) {
        std::cout << fibonacci::fibonacci(i) << std::endl;
    }
    return 0;
}