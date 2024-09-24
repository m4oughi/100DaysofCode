#include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec) {
    std::cout << "Vector size: " << vec.size() << std::endl;
}

int main() {
    printVector(std::vector<int>{1, 2, 3, 4});  // Temporary std::vector

    return 0;
}
