#include <iostream>

int main(){

    int a = 5; // 0000 0101
    int b = 10; // 0000 1010

    int result;

    // Bitwise AND
    result = a & b; // 0000 0000 (0)
    std::cout << "Bitwise AND: " << result << std::endl;
    // Bitwise OR
    result = a | b; // 0000 1111 (15)
    std::cout << "Bitwise OR: " << result << std::endl;
    // Bitwise XOR
    result = a ^ b; // 0000 1111 (15)
    std::cout << "Bitwise XOR: " << result << std::endl;
    // Bitwise NOT 
    result = ~a; // 1111 1010 (-6)
    std::cout << "Bitwise NOT: " << result << std::endl;



    // Left Shift
    result = a << 1; // 0000 1010 (10)
    std::cout << "Left Shift: " << result << std::endl;
    // Right Shift
    result = a >> 1; // 0000 0010 (2)
    std::cout << "Right Shift: " << result << std::endl;

    return 0;
}