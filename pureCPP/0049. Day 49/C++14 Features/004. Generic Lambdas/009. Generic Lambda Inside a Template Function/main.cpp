#include <iostream>

template <typename T>
void process(T value) {
    auto lambda = [](auto x) { return x * 2; };
    std::cout << "Processed Value: " << lambda(value) << std::endl;
}

int main() {
    process(10);
    process(3.5);
    return 0;
}
