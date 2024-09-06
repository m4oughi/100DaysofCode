#include <iostream>
#include <vector>

int& getVectorElement(std::vector<int>& vec) {
    vec.push_back(500);
    return vec[0];  // Reference to the first element
}

int main() {
    std::vector<int> myVec;
    int& ref = getVectorElement(myVec);  // Safe reference

    myVec.pop_back();  // Modifies the container, invalidating the reference

    std::cout << "Dangling Reference: " << ref << std::endl;  // Undefined behavior

    return 0;
}
