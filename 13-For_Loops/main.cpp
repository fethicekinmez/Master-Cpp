#include <iostream>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}