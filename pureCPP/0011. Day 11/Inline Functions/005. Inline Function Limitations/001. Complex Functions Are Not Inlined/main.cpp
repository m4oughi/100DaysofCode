#include <iostream>

// Complex inline function (unlikely to be inlined)
inline int complexFunction(int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += i * i; // Complex logic
    }
    return result;
}

int main() {
    std::cout << "Complex Function Result: " << complexFunction(10) << std::endl; // Output: 285
    return 0;
}
