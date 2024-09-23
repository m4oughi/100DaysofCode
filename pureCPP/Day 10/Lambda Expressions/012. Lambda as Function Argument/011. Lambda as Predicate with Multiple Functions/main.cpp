#include <iostream>
#include <vector>
#include <algorithm>

bool checkCondition(int x, const std::function<bool(int)>& condition) {
    return condition(x);
}

int main() {
    auto isEven = [](int x) { return x % 2 == 0; };
    auto isPositive = [](int x) { return x > 0; };

    std::cout << "Is 4 even? " << checkCondition(4, isEven) << std::endl;         // Outputs: true
    std::cout << "Is -3 positive? " << checkCondition(-3, isPositive) << std::endl; // Outputs: false

    return 0;
}
