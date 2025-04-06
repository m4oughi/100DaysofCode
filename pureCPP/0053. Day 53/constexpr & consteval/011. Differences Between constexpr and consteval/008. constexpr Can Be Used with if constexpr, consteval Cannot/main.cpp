#include <iostream>

constexpr int process(int x) {
    if constexpr (sizeof(int) == 4)
        return x * 2;
    else
        return x * 3;
}

int main() {
    constexpr int result = process(5);  // ✅ OK
}
