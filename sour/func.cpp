#include "../head/func.hpp"
#include <sstream>
#include <cctype>

std::vector<int> extractNumbers(const std::string& input) {
    std::vector<int> numbers;
    std::string currentNumber;
    
    for (char c : input) {
        if (std::isdigit(c)) {
            currentNumber += c;
        } else if (!currentNumber.empty()) {
            numbers.push_back(std::stoi(currentNumber));
            currentNumber.clear();
        }
    }
    
    if (!currentNumber.empty()) {
        numbers.push_back(std::stoi(currentNumber));
    }
    
    return numbers;
}

std::string formatNumbers(const std::vector<int>& numbers) {
    std::stringstream result;
    
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result << " ";
        }
        result << numbers[i];
    }
    
    return result.str();
}