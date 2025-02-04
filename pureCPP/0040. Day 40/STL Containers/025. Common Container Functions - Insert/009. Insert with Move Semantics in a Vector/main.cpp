#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> myVec = {"A", "B", "C"};

    // Insert a temporary string object at the second position
    myVec.insert(myVec.begin() + 1, std::move(std::string("X")));

    // Output the vector after insertion
    std::cout << "Vector after move insert: ";
    for (const auto& str : myVec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
