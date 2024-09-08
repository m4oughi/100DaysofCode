#include <iostream>
#include <vector>

int main() {
    std::vector<int> largeVector;

    largeVector.reserve(1000000);  // Reserve memory for 1 million elements
    std::cout << "Capacity after reserve: " << largeVector.capacity() << std::endl;

    for (int i = 0; i < 1000000; ++i) {
        largeVector.push_back(i);
    }

    std::cout << "Size after filling: " << largeVector.size() << std::endl;
    std::cout << "Capacity after filling: " << largeVector.capacity() << std::endl;

    // Shrink capacity to fit the size
    largeVector.shrink_to_fit();
    std::cout << "Capacity after shrink_to_fit: " << largeVector.capacity() << std::endl;

    return 0;
}
