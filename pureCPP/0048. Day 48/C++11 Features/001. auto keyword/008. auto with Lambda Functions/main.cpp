#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; }; // Lambda function

    std::cout << "Sum: " << add(3, 7) << std::endl;
    return 0;
}
