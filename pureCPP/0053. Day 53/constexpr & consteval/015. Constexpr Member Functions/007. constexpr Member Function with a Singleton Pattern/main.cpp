#include <iostream>

class Singleton {
public:
    constexpr static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    constexpr int getValue() const { return value; }

private:
    constexpr Singleton() : value(42) {}
    int value;
};

int main() {
    constexpr Singleton& instance = Singleton::getInstance();
    std::cout << "Singleton value: " << instance.getValue() << '\n';
}
