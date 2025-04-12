#include <iostream>

enum Mode { Basic = 0, Standard = 1, Advanced = 2 };
enum Access { Guest = 0, User = 1, Admin = 2 }; // Same values, different meanings

int main() {
    Mode mode = Advanced;
    Access access = Admin;
    
    std::cout << "Mode: " << mode << ", Access: " << access << std::endl;
}
