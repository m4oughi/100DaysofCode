#include <iostream>

int main() {
    char buffer[10] = {0};
    int* intPtr = reinterpret_cast<int*>(buffer);  // Cast buffer to an int pointer
    *intPtr = 0x12345678;  // Assign an integer value using pointer arithmetic

    // Accessing the memory location as characters
    char firstByte = buffer[0];  // First byte of the integer value
    char secondByte = buffer[1];  // Second byte of the integer value

}