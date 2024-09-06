#include <iostream>
#include <utility>

void process(auto&& value) {  // auto&& can be an l-value or r-value reference
    auto& ref = value;  // auto& deduces the reference type based on the passed argument

    if constexpr (std::is_rvalue_reference_v<decltype(value)>) {
        std::cout << "R-value reference" << std::endl;
    } else {
        std::cout << "L-value reference" << std::endl;
    }

    ref += 10;  // Modify the value
}

int main() {
    int a = 90;
    process(a);      // L-value reference
    process(100);    // R-value reference
}
