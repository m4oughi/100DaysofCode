#include <iostream>

enum class Step { First = 1, Second = 2, Third = 3 };

int main() {
    Step s = Step::First;

    // Step next = s + 1; // ❌ Cannot add directly
    Step next = static_cast<Step>(static_cast<int>(s) + 1); // ✅ OK with casting

    std::cout << "Next step value: " << static_cast<int>(next) << std::endl;
}
