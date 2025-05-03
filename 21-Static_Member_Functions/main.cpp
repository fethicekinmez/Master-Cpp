#include <iostream>

class MyClass {
private:
    static int instanceCount; // Static member variable
public:
    MyClass() {
        instanceCount++;
    }

    static int getInstanceCount() { // Static member function
        return instanceCount;
    }
};

int MyClass::instanceCount = 0; // Initialize static member variable

int main(){

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    std::cout << "Number of instances created: " << MyClass::getInstanceCount() << std::endl;
    
    return 0;
}

// Output: Number of instances created: 3