#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> data = {42, 3.14, "Hello"};

    for (auto&& element : {std::get<0>(data), std::get<1>(data), std::get<2>(data)}) {
        std::cout << element << " ";
    }

    return 0;
}
