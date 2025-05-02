#include <iostream>


int main(){

    int num1 = 10;  
    int num2 = 20;

    int result1 = num2; // Assignment operator
    result1 += num1; // Compound assignment operator
    std::cout << "Result of num2 + num1: " << result1 << std::endl; // Output: 30
    
    int result2 = num2;
    result2 -= num1; // Compound assignment operator
    std::cout << "Result of num2 - num1: " << result2 << std::endl; // Output: 10

    int result3 = num2;
    result3 *= num1; // Compound assignment operator
    std::cout << "Result of num2 * num1: " << result3 << std::endl; // Output: 200

    int result4 = num2;
    result4 /= num1; // Compound assignment operator
    std::cout << "Result of num2 / num1: " << result4 << std::endl; // Output: 2

    return 0;
}

/*
Result of num2 + num1: 30
Result of num2 - num1: 10
Result of num2 * num1: 200
Result of num2 / num1: 2
*/