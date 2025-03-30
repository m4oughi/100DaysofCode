#include <iostream>

int main() {
    char message[] = "Hello"; // Null-terminated string

    for (char ch : message) {
        if (ch == '\0') break; // Stop at null terminator
        std::cout << ch << " ";
    }

    return 0;
}
