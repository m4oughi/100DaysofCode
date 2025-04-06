#include <iostream>

constexpr int compute(int x) {
    if constexpr (sizeof(int) == 4)  
        return x * 2;  
    else  
        return x * 3;
}

int main() {
    constexpr int result = compute(5);  // ✅ Computed at compile-time
}
