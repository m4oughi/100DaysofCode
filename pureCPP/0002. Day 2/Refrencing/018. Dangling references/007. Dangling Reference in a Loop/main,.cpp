#include <iostream>
#include <vector>

std::vector<int> getVector() {
    std::vector<int> vec = {1, 2, 3};
    return vec;  // Return a vector
}

int main() {
    std::vector<int> myVec = getVector();
    int& ref = myVec[0];  // Reference to the first element

    myVec.clear();  // Clear the vector, reference becomes dangling

    std::cout << "Dangling Reference: " << ref << std::endl;  // Undefined behavior

    return 0;
}
