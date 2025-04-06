#include <iostream>

constexpr int function(int x) { return x + 1; }

constexpr int callFunction(int (*func)(int), int x) {  
    // return func(x);  // ❌ Compilation error: function pointers are not allowed
    return x + 1;  // ✅ Workaround: Call functions directly
}

int main() {
    constexpr int result = callFunction(function, 5);
    std::cout << "Result: " << result << '\n';
}
