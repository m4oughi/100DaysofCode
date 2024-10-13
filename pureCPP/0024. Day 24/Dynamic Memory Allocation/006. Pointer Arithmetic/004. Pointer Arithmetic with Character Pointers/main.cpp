#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    char* ptr = str; // points to the first character of the string

    cout << "String using pointer arithmetic: ";
    while (*ptr != '\0') { // loop until null character
        cout << *ptr; // print the character
        ptr++; // move to the next character
    }
    cout << endl;

    return 0;
}
