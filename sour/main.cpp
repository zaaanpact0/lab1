#include <iostream>
#include <string>
#include "../head/func.hpp"

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    
    auto numbers = extractNumbers(input);
    
    std::string result = formatNumbers(numbers);
    std::cout << "Результат: " << result << std::endl;
    
    return 0;
}