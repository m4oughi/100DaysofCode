#include <iostream>

int main() {
    auto square = [](int n) {
        return n * n;
    };

    for (int i = 1; i <= 5; ++i) {
        std::cout << "Square of " << i << " is: " << square(i) << std::endl;
    }
    return 0;
}
