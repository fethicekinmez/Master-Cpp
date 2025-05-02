#include <iostream>
using namespace std;

int main(){

    int myArray[5] = {1, 2, 3, 4, 5};
    cout << "First element: " << myArray[0] << endl; //First element: 1
    cout << "Third element: " << myArray[2] << endl; //Third element: 3

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Element at (1, 2): " << matrix[1][2] << endl; //Element at (1, 2): 6
    cout << "Element at (2, 0): " << matrix[2][0] << endl; //Element at (2, 0): 7
}