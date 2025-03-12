#include <iostream>

int main() {
    int a = 10;
    int& ref = a;
    
    auto b = ref;  // `b` is int (not a reference)
    b = 20;        // Modifies b, not a

    std::cout << "a: " << a << ", b: " << b << "\n";  // a is still 10
    return 0;
}
