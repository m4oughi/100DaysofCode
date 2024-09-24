#include <iostream>
using namespace std;

void displayMessage(string msg = "Default Message") {
    cout << msg << endl;
}

void displayNumber(int num = 42) {
    cout << "Number: " << num << endl;
}

int main() {
    void (*funcPtr)() = displayMessage;
    funcPtr();    // Calls displayMessage with default argument

    funcPtr = displayNumber;
    funcPtr();    // Calls displayNumber with default argument
    return 0;
}
