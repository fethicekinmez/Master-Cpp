#include <iostream>

int func1(){
    return 1;
}

double func2(){
    return 2.0;
}


int main(){

    int a = func1(); // Call func1 and assign its return value to a
    int b = (int)func2(); // Call func2, cast its return value to int, and assign it to b

    std::cout << "a: " << a << " b: " << b << std::endl; // Output the value of a

    return 0; 
}