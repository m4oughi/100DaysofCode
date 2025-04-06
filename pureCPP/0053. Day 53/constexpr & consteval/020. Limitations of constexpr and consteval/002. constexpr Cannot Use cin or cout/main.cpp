#include <iostream>

constexpr int getInput() { 
    // int x; std::cin >> x;  // ❌ Compilation error: cin is not allowed in constexpr
    return 100;  // ✅ Workaround: Use predefined values
}

int main() {
    constexpr int val = getInput();
    std::cout << "Value: " << val << '\n';
}
