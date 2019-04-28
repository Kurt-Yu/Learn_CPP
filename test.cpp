#include<iostream>

int main() {
    int i = 0, j = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> i >> j;

    while (i <= j) {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}