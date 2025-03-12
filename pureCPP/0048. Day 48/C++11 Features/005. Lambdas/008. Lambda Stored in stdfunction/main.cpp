#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> add = [](int a, int b) { return a + b; };

    std::cout << "Sum: " << add(10, 20) << std::endl;

    return 0;
}
