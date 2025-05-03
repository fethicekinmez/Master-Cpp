#include <iostream>
#include <cmath>


int main(){

    double degrees = 45.0;
    double radians = degrees * (M_PI / 180.0); // Convert degrees to radians

    double sineValue = sin(radians); // Calculate sine
    double cosineValue = cos(radians); // Calculate cosine
    double tangentValue = tan(radians); // Calculate tangent
    double squareRootValue = sqrt(16.0); // Calculate square root
    double powerValue = pow(2, 3); // Calculate power (2^3)

    std::cout << "Sine of " << degrees << " degrees: " << sineValue << std::endl; // Sine of 45 degrees: 0.707107
    std::cout << "Cosine of " << degrees << " degrees: " << cosineValue << std::endl; // Cosine of 45 degrees: 0.707107
    std::cout << "Tangent of " << degrees << " degrees: " << tangentValue << std::endl; // Tangent of 45 degrees: 1
    std::cout << "Square root of 16: " << squareRootValue << std::endl; // Square root of 16: 4
    std::cout << "2 raised to the power of 3: " << powerValue << std::endl; // 2 raised to the power of 3: 8

    return 0;
}