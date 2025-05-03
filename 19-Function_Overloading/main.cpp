#include <iostream>

int add(int a, int b) {
    return a + b;
}
double add(double a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

int main(){

    int a = 5, b = 10;
    double c = 5.5, d = 10.5;

    std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << std::endl;
    std::cout << "The sum of " << c << " and " << b << " is: " << add(c, b) << std::endl;
    std::cout << "The sum of " << c << " and " << d << " is: " << add(c, d) << std::endl;
    
    return 0;
}

/*
The sum of 5 and 10 is: 15
The sum of 5.5 and 10 is: 15.5
The sum of 5.5 and 10.5 is: 16
*/