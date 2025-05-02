#include <iostream>

void addByReference(int &a, int &b){
    a += b;
}

int main(){

    int a = 5;
    int b = 10;
    std::cout << "Before: a = " << a << std::endl; // Before: a = 5, b = 10
    addByReference(a, b); // Call by reference
    std::cout << "After: a = " << a << std::endl; // After: a = 15, b = 10

    return 0;
}