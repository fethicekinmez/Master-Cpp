#include <iostream>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    size_t i = 0;
    while(i < sizeof(arr)/sizeof(arr[0])){
        std::cout << arr[i] << " ";
        ++i;
    }
    std::cout << std::endl;

    return 0;
}