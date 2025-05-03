#include <iostream>

int main(){

    int score = 85;

    bool isPassed = (score >= 60); // Using the greater than or equal to operator

    if(isPassed) {
        std::cout << "You have passed the exam!" << std::endl;
    } else {
        std::cout << "You have failed the exam." << std::endl;
    }

}

/*
You have passed the exam!
*/