#include <iostream>

class ConstexprExample {
public:
    constexpr ConstexprExample(int v) : value(v) {}
    constexpr int getValue() const { return value; }

private:
    int value;
};

class ConstevalExample {
public:
    consteval ConstevalExample(int v) : value(v) {}
    constexpr int getValue() const { return value; }

private:
    int value;
};

int main() {
    constexpr ConstexprExample ce(10);  // ✅ Can be used at runtime too
    std::cout << "Constexpr Value: " << ce.getValue() << '\n';

    // ConstevalExample ceval(20); ❌ ERROR: Must be compile-time only!
}
