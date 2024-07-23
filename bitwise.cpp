#include <iostream>

void performBitwiseOperations(int a, int b) {
    std::cout << "Bitwise AND (a & b): " << (a & b) << std::endl;
    std::cout << "Bitwise OR (a | b): " << (a | b) << std::endl;
    std::cout << "Bitwise XOR (a ^ b): " << (a ^ b) << std::endl;
    std::cout << "Bitwise NOT (~a): " << (~a) << std::endl;
    std::cout << "Bitwise NOT (~b): " << (~b) << std::endl;
    std::cout << "Left shift (a << 1): " << (a << 1) << std::endl;
    std::cout << "Left shift (b << 1): " << (b << 1) << std::endl;
    std::cout << "Right shift (a >> 1): " << (a >> 1) << std::endl;
    std::cout << "Right shift (b >> 1): " << (b >> 1) << std::endl;
}

int main() {
    int a, b;

    std::cout << "Enter the first integer (a): ";
    std::cin >> a;

    std::cout << "Enter the second integer (b): ";
    std::cin >> b;

    performBitwiseOperations(a, b);

    return 0;
}

