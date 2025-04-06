#include <iostream>

union Data {
    int i;
    double d;

    constexpr Data(int val) : i(val) {} // OK: constexpr constructor for int
};

int main() {
    constexpr Data d(42); 
    std::cout << "Data: " << d.i << '\n';
    return 0;
}
