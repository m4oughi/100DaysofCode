#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    std::cout << "Initial capacity: " << vec.capacity() << "\n";

    vec.reserve(10);
    std::cout << "Capacity after reserving: " << vec.capacity() << "\n";

    vec.push_back(1);
    vec.push_back(2);
    std::cout << "Size after adding elements: " << vec.size() << "\n";

    return 0;
}
