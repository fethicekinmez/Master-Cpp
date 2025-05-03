#include <iostream>

int main(){

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    // Dynamic memory allocation
    int* arr = new int[size];

    // Initialize the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    // Print the array
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory
    delete[] arr;

    return 0;

}