#include <iostream>
#include <functional>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::function<int(int, int)> func = subtract;
    int result = std::invoke(func, 10, 4);
    
    std::cout << "Function Result: " << result << "\n";
    return 0;
}
