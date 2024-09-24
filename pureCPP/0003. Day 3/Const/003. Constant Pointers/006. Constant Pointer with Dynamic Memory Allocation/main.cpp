#include <iostream>

int main() {
    int* const dynPtr = new int(100); // Constant pointer to dynamically allocated int
    *dynPtr = 110; // Allowed: modifying the value
    // dynPtr = &b; // NOT allowed: changing the pointer's target

    delete dynPtr; // Remember to free the allocated memory


    return 0;
}