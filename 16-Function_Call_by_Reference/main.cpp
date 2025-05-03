#include <iostream>

int add(int a, int b){
    return a + b;
}

int main(){

    int (*addPtr)(int, int) = &add; // Function pointer declaration
    std::cout << (*addPtr)(2, 3) << std::endl; // Function pointer call
    std::cout << addPtr(2, 3) << std::endl; // Function pointer call without dereferencing

    return 0;
}

/*
5
5
*/