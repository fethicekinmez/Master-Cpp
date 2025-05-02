#include <iostream>
#include <cmath> // For std::abs

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Calculate the absolute value
    int absoluteValue = std::abs(number);

    std::cout << "The absolute value of " << number << " is " << absoluteValue << std::endl;

    return 0;
}