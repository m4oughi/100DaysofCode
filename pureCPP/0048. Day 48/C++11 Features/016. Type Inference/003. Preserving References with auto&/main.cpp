#include <iostream>

int main() {
    int a = 10;
    int& ref = a;
    
    auto& b = ref;  // `b` is now a reference to `a`
    b = 20;         // Modifies `a`

    std::cout << "a: " << a << ", b: " << b << "\n";  // a is 20
    return 0;
}
