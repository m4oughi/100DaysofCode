#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> add = [](int a, int b) {
        return a + b;
    };

    std::cout << "Sum: " << add(5, 3) << std::endl;  // Output: 8

    return 0;
}
