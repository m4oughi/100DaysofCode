#include <iostream>

struct Settings {
    static inline int timeout = 30;
};

int main() {
    std::cout << "Initial Timeout: " << Settings::timeout << '\n';
    Settings::timeout = 60;
    std::cout << "Updated Timeout: " << Settings::timeout << '\n';
    return 0;
}
