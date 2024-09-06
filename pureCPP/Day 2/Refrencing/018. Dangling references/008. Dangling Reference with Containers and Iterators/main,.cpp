#include <iostream>
#include <vector>

std::vector<int> createVector() {
    std::vector<int> vec = {10, 20, 30};
    return vec;  // Return a vector
}

int main() {
    std::vector<int> myVec = createVector();
    auto it = myVec.begin();  // Iterator to the first element

    myVec.clear();  // Clear the vector, iterator becomes invalid

    std::cout << "Dangling Reference: " << *it << std::endl;  // Undefined behavior

    return 0;
}
