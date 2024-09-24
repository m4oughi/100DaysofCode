#include <iostream>
#include <cstring>

void modifyString(const char* str) {
    char* nonConstStr = const_cast<char*>(str); // Removing constness from C-string
    nonConstStr[0] = 'H'; // Modifying the string
}

int main() {
    char hello[] = "hello";
    modifyString(hello);
    std::cout << "Modified string: " << hello << std::endl; // Prints "Hello"
}
