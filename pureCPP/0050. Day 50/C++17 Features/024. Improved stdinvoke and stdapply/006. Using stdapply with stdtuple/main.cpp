#include <iostream>
#include <tuple>
#include <functional>

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::tuple<int, int, int> args{2, 3, 5};
    int result = std::apply(sum, args); // Calls sum(2, 3, 5)
    
    std::cout << "Sum Result: " << result << "\n";
    return 0;
}
