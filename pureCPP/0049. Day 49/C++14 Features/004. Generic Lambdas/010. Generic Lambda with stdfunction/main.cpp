#include <iostream>
#include <functional>

int main() {
    std::function<int(int, int)> add = [](auto a, auto b) { return a + b; };

    std::cout << "Addition: " << add(5, 10) << std::endl;

    return 0;
}
