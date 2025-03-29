#include <iostream>
#include <concepts>

// Concept requiring arithmetic types
template <typename T>
concept Arithmetic = std::integral<T> || std::floating_point<T>;

// Class template constrained by Arithmetic concept
template <Arithmetic T>
class Calculator {
public:
    Calculator(T val) : value(val) {}
    T square() const { return value * value; }
private:
    T value;
};

int main() {
    Calculator<int> intCalc(5);
    std::cout << intCalc.square() << '\n'; // ✅ Works

    Calculator<double> doubleCalc(3.5);
    std::cout << doubleCalc.square() << '\n'; // ✅ Works

    // Calculator<std::string> strCalc("hello"); // ❌ Compilation Error
}
