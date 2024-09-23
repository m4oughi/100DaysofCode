#include <iostream>
#include <vector>

int main() {
    auto printVector = [](const auto& vec) {
        for (const auto& element : vec) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    };

    std::vector<int> intVec = {1, 2, 3, 4, 5};
    std::vector<std::string> strVec = {"A", "B", "C"};

    printVector(intVec); // Outputs: 1 2 3 4 5 
    printVector(strVec); // Outputs: A B C
    return 0;
}
