#include <iostream>
#include <vector>

void printVector(const std::vector<int> &vec) {
    for (const int &val : vec) {
        std::cout << val << std::endl;
    }
    // vec.push_back(200); // NOT allowed: modifying the const vector is not allowed
}

int main() {
    std::vector<int> vec = {210, 220, 230};
    printVector(vec); // Passing a non-const vector as a const reference

    return 0;
}