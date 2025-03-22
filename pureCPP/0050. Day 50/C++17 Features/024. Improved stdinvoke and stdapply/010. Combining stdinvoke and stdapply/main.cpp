#include <iostream>
#include <tuple>
#include <functional>

struct Operations {
    int multiply(int a, int b) { return a * b; }
};

int main() {
    Operations ops;
    std::tuple<int, int> args{3, 7};

    int result = std::apply(std::bind_front(&Operations::multiply, ops), args);
    
    std::cout << "Combined Result: " << result << "\n";
    return 0;
}
