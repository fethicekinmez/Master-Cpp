#include <iostream>

class Person{
private:
    std::string name_;
    int age_;
public:
// Constructor
    Person(std::string name, int age) : name_(name), age_(age) {
        std::cout << "Constructor called for " << this << std::endl;
    } 
// Member function
    void introduce(){
        std::cout << "Hi, my name is " << name_ << ", and i am  " << age_ << " years old." << std::endl;
    }
// Destructor
    ~Person(){ 
        std::cout << "Destructor called for " << this << std::endl;
    }
};

int main(){
    Person person1("Alice", 30);
    person1.introduce(); // Hi, my name is Alice, and i am  30 years old.
    
    Person person2("Bob", 25);
    person2.introduce(); // Hi, my name is Bob, and i am  25 years old.

    return 0;

}

/*
Constructor called for 0x16fafee08
Hi, my name is Alice, and i am  30 years old.
Constructor called for 0x16fafedc0
Hi, my name is Bob, and i am  25 years old.
Destructor called for 0x16fafedc0
Destructor called for 0x16fafee08
*/