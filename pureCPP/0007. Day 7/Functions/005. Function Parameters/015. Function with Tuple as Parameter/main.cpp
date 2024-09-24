#include <iostream>
#include <tuple>

// Function declaration accepting tuple as parameter
void printTuple(std::tuple<int, double, std::string> data);

int main() {
    auto data = std::make_tuple(1, 3.14, "Example");
    printTuple(data);  // Function call with tuple
    return 0;
}

// Function definition accepting tuple as parameter
void printTuple(std::tuple<int, double, std::string> data) {
    std::cout << "Integer: " << std::get<0>(data) 
              << ", Double: " << std::get<1>(data) 
              << ", String: " << std::get<2>(data) << std::endl;
}
