#include <iostream>

class Rectangle{
private:
    int width_;
    int height_;
public:
    void setDimensions(int width, int height){
        width_ = width;
        height_ = height;
    }
    double calculateArea(){
        return width_ * height_;
    }
};

int main(){

    Rectangle rect;
    rect.setDimensions(5, 10);
    std::cout << "Area of rectangle: " << rect.calculateArea() << std::endl; // Area of rectangle: 50


    Rectangle* rectPtr = new Rectangle();
    rectPtr->setDimensions(7, 3);
    std::cout << "Area of rectangle: " << rectPtr->calculateArea() << std::endl; // Area of rectangle: 21
    delete rectPtr; // Don't forget to free the memory allocated for the object

    return 0;
}