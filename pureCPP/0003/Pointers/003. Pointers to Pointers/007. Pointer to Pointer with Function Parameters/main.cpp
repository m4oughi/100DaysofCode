#include <iostream>

int main() {
    void updateValue(int** pptr) {
        **pptr = 50;  // Change the value pointed to by the pointer
    }

    int main() {
        int a = 10;
        int* ptr = &a;
        int** pptr = &ptr;

        updateValue(pptr);  // Pass pointer to pointer to the function

        // 'a' is now updated to 50
    }
}