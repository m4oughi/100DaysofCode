#include <iostream>
#include <utility>
#include <type_traits>

class Sample {
public:
    Sample(int x) { std::cout << "Constructor called with " << x << "\n"; }
    void display() { std::cout << "Display method\n"; }
};

int main() {
    using Type = decltype(std::declval<Sample>().display());
    std::cout << std::is_void<Type>::value << "\n"; // Outputs 1 (true)

    return 0;
}
