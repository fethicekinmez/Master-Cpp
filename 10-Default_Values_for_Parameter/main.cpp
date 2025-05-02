#include <iostream>
using namespace std;

void sendMessage(string sender = "Anonymous", string message = "Hello!") {
    cout << sender << ": " << message << endl;
}

int main(){

    // Calling the function with default values
    sendMessage(); // Uses default values for both parameters
    sendMessage("Alice"); // Uses default value for message
    sendMessage("Bob", "Hi there!"); // Uses custom values for both parameters
    sendMessage("", "Goodbye!"); // Uses default value for sender

    return 0;
}

/*
Anonymous: Hello!
Alice: Hello!
Bob: Hi there!
: Goodbye!
*/