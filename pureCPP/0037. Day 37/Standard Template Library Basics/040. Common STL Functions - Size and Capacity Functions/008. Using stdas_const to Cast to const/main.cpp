#include <iostream>
#include <utility>
#include <vector>

void printVector(const std::vector<int>& vec) {
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    
    // Ensuring vec is passed as a const reference
    printVector(std::as_const(vec));

    return 0;
}
