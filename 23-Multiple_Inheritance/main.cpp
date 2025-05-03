#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

class Vehicle {
public:
    void drive() {
        std::cout << "Vehicle drives" << std::endl;
    }
};

// The Hybrid class inherits from both Animal and Vehicle classes.
class Hybrid : public Animal, public Vehicle {
public:
    void hybridFunction() {
        std::cout << "Hybrid function" << std::endl;
    }
};

int main(){

    Hybrid hybrid;
    hybrid.eat(); // Calls the eat function from Animal class
    hybrid.drive(); // Calls the drive function from Vehicle class
    hybrid.hybridFunction(); // Calls the hybrid function from Hybrid class

    return 0;
}