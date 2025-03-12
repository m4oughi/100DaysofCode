#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> data(42, 3.14, "C++");

    auto printTuple = [](const auto& tuple) {
        for (const auto& value : {std::get<0>(tuple), std::get<1>(tuple), std::get<2>(tuple)}) {
            std::cout << value << " ";
        }
    };

    printTuple(data);
    
    return 0;
}
