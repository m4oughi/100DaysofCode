#include <iostream>
#include <vector>

void modifyElement(std::vector<int>& vec, std::size_t index) {
    int& nonConstElem = const_cast<int&>(vec[index]); // Removing constness
    nonConstElem = 100; // Modifying the element
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    modifyElement(vec, 2);
    for (const auto& elem : vec) {
        std::cout << elem << " "; // Prints 1 2 100 4 5
    }
}
