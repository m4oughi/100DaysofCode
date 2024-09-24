#include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec) {  // Const reference to vector
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> myVec = {4, 5, 6};
    printVector(myVec);  // Passing vector

    return 0;
}
