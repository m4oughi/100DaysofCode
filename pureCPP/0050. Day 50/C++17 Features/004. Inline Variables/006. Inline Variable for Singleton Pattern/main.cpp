#include <iostream>

class Singleton {
public:
    static inline Singleton instance;  // Inline static instance
    void greet() { std::cout << "Hello from Singleton!\n"; }
};

int main() {
    Singleton::instance.greet();
    return 0;
}
