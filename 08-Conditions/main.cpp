#include <iostream>

int main(){

    int age = 20;
    if(age >= 18) { // If condition
        std::cout << "You are an adult." << std::endl;
    } else { // Else condition
        std::cout << "You are a minor." << std::endl;
    }

    int day = 4;
    switch(day) { // Switch statement
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        default:
            std::cout << "Weekend" << std::endl;
    }

    return 0;
}

/*
You are an adult.
Thursday
*/