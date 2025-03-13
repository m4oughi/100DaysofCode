#include <iostream>

constexpr long long operator"" _kg(unsigned long long value) {
    return value;
}

int main() {
    long long weight = 5'000_kg; // 5000 kg using user-defined literal

    std::cout << "Weight: " << weight << " kg" << std::endl;
    return 0;
}
