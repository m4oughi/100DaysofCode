#include <iostream>

class Singleton {
public:
    static constexpr auto instance = [] { return Singleton(); }();
    
    constexpr int getValue() const { return 42; }

private:
    constexpr Singleton() = default;
};

int main() {
    constexpr Singleton s = Singleton::instance;
    std::cout << "Singleton Value: " << s.getValue() << '\n';
}
