#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> data = {42, 3.14, "Hello"};

    for (const auto& element : {std::get<0>(data), std::get<1>(data)}) { // Deduction for tuple elements
        std::cout << element << " ";
    }

    return 0;
}
