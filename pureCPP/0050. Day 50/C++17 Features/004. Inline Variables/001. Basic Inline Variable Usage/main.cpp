#include <iostream>

struct Config {
    static inline int value = 42;  // Inline static variable
};

int main() {
    std::cout << "Config value: " << Config::value << '\n';
    return 0;
}
