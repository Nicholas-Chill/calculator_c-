#include <iostream>

int main() {
    float x;
    float y;
    char op;
    float result;

    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter an operator: ";
    std::cin >> op;
    std::cout << "Enter the second number: ";
    std::cin >> y;

    switch (op) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
    }
    
    std::cout << x << " " << op << " " << y << " = " << result;

    return 0;
}