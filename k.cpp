#include <iostream>
#include <string>
#include <cstdlib>
 
int main() {
    std::string operation;
    double number1, number2;
 
    std::cout << "输入一个符号 (+, -, *, /): ";
    std::cin >> operation;
 
    std::cout << "输入两个数: ";
    std::cin >> number1 >> number2;
 
    if (operation == "+") {
        std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    } else if (operation == "-") {
        std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    } else if (operation == "*") {
        std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    } else if (operation == "/") {
        if (number2 == 0) {
            std::cout << "错误：除数不能为0" << std::endl;
        } else {
            std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
        }
    } else {
        std::cout << "错误：未知操作" << std::endl;
    }
 
    return 0;
}