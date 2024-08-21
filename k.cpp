#include <iostream>
#include <string>
#include <cstdlib>
 
int main() {
    std::string operation;
    double number1, number2;
 
    std::cout << "����һ������ (+, -, *, /): ";
    std::cin >> operation;
 
    std::cout << "����������: ";
    std::cin >> number1 >> number2;
 
    if (operation == "+") {
        std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    } else if (operation == "-") {
        std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    } else if (operation == "*") {
        std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    } else if (operation == "/") {
        if (number2 == 0) {
            std::cout << "���󣺳�������Ϊ0" << std::endl;
        } else {
            std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
        }
    } else {
        std::cout << "����δ֪����" << std::endl;
    }
 
    return 0;
}