#include <iostream>

class MyClass {
public:
    const int runtimeValue = 10;  // Initialized at runtime
    constexpr int compileTimeValue = 20;  // Initialized at compile-time
    
    int getRuntimeValue() const { return runtimeValue; }
    constexpr int getCompileTimeValue() const { return compileTimeValue; }
};

int main() {
    MyClass obj;
    std::cout << "Runtime value: " << obj.getRuntimeValue() << '\n';  // Computed at runtime
    std::cout << "Compile-time value: " << obj.getCompileTimeValue() << '\n';  // Computed at compile-time
}
