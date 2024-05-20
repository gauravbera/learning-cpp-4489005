// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    switch (operation){ // branching statement allowing to take one or several paths
        case '+': // constant of interest. Character constant in single quotes
            result = operand_1 + operand_2;
            break; // every case block ending with break statement to halt the switch execution
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
        default: // by default we perform addition
            result = operand_1 + operand_2;
            break;
    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
