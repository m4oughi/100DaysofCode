#include <iostream>
#include <tuple>
#include <functional>

struct Calculator {
    int add(int a, int b) { return a + b; }
};

int main() {
    Calculator calc;
    std::tuple<Calculator, int, int> args{calc, 5, 7};
    
    int result = std::apply(&Calculator::add, args); // Calls calc.add(5, 7)
    std::cout << "Member Function Result: " << result << "\n";
    
    return 0;
}
