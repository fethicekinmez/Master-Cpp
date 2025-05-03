#include <iostream>

namespace OuterNamespace {
    const double PI = 3.14;
    namespace InnerNamespace {
        class Circle{
        private:
            double radius;
        public:
            Circle(double r) : radius(r) {}
            double area() const {
                return PI * radius * radius;
            }
        };
    }
}

namespace secondNamespace {
    void printPI(){
        //!std::cout << "PI from secondNamespace: " << PI << std::endl; // Error: 'PI' was not declared in this scope
        std::cout << "PI from secondNamespace: " << OuterNamespace::PI << std::endl;
    }
}

int main(){

    OuterNamespace::InnerNamespace::Circle circle(5.0);
    std::cout << "Area of the circle: " << circle.area() << std::endl; // Area of the circle: 78.5

    secondNamespace::printPI(); // PI from secondNamespace: 3.14

    return 0;
}