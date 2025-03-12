#include <iostream>

int main() {
    int a = 5, b = 10;

    auto captureAllByValue = [=]() { std::cout << "a: " << a << ", b: " << b << std::endl; };
    auto captureAllByReference = [&]() { a += 5; b *= 2; };

    captureAllByValue();
    captureAllByReference();
    captureAllByValue(); // Values inside the lambda remain unchanged

    return 0;
}
