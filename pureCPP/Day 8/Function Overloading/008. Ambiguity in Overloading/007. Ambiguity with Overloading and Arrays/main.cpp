#include <iostream>
using namespace std;

void print(int* arr) {
    cout << "Array of integers" << endl;
}

void print(char* arr) {
    cout << "Array of characters" << endl;
}

int main() {
    print("Hello");  // Ambiguous: "Hello" could be interpreted as either int* or char*
    return 0;
}
