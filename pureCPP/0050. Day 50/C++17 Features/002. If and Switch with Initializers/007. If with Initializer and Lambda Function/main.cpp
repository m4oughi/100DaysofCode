#include <iostream>

int main() {
    if (auto result = [](int a, int b) { return a + b; }(10, 5); result > 10) {
        std::cout << "Sum is greater than 10: " << result << '\n';
    } else {
        std::cout << "Sum is 10 or less: " << result << '\n';
    }
    return 0;
}
