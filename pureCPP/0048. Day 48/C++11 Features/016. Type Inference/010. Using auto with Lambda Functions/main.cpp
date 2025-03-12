#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; };

    std::cout << "Sum: " << add(5, 10) << "\n";
    return 0;
}
