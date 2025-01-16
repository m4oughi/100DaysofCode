#include <iostream>
#include <vector>
#include <algorithm>

void printElement(int element) {
    std::cout << element << " ";
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Elements in the vector: ";
    std::for_each(vec.begin(), vec.end(), printElement);
    std::cout << "\n";

    return 0;
}
