#include <iostream>
#include <tuple>

int main() {
    // Lambda with structured binding in parameter list
    auto printTuple = [](const auto& [first, second]) {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    };
    std::tuple<int, std::string> myTuple = {1, "Lambda"};
    printTuple(myTuple); // Outputs First: 1, Second: Lambda
    return 0;
}
