#include <iostream>

void increament(int a){
    a++;
    std::cout << "Inside increment function: " << a << std::endl;
}

int main(){

    int x = 10;
    increament(x);
    std::cout << "Inside main function: " << x << std::endl;


    return 0;
}

/*
Inside increment function: 11
Inside main function: 10
*/