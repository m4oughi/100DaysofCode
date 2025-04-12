#include <iostream>

enum Status { OK, Error }; // Unscoped

void checkStatus() {
    int OK = 1; // Conflicts with enum member
    std::cout << "OK: " << OK << std::endl; // Unclear which 'OK'
}

int main() {
    checkStatus();
}
