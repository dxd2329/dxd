#include <iostream>
#include <string>
#include <cstdlib>
 
int main() {
    std::string operation;
    double number1, number2;
 
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
 
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;
 
    if (operation == "+") {
        std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    } else if (operation == "-") {
        std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    } else if (operation == "*") {
        std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    } else if (operation == "/") {
        if (number2 == 0) {
            std::cout << "Error: Division by zero." << std::endl;
        } else {
            std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
        }
    } else {
        std::cout << "Error: Unknown operation." << std::endl;
    }
 
    return 0;
}