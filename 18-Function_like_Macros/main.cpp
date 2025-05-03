#include <iostream>

#define SQUARE(x) ((x)*(x))

int main(){

    int a = 5;
    int res = SQUARE(a);
    std::cout << "The square of " << a << " is: " << res << std::endl;
    return 0;
}
/*
The square of 5 is: 25
*/