#include <iostream>

int main(){

    bool isSunny = true;
    bool isWeekend = true;

    bool isBeachDay = isSunny && isWeekend; // Logical AND
    std::cout << "Is it a beach day? " << (isBeachDay ? "Yes" : "No") << std::endl;

    return 0;
}

/*
Is it a beach day? Yes
*/