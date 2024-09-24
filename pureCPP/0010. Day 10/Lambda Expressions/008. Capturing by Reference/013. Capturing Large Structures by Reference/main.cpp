#include <iostream>
#include <vector>

struct LargeStruct {
    std::vector<int> data;
    LargeStruct() : data(1000000, 0) {}
};

int main() {
    LargeStruct large;
    auto modifyStruct = [&large]() {
        large.data[0] = 42;
    };

    modifyStruct();
    std::cout << "First element: " << large.data[0] << std::endl; // Outputs: First element: 42
    return 0;
}
