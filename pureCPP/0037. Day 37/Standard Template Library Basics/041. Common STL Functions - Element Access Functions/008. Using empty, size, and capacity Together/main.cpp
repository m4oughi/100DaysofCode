#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    std::cout << "Is vector empty? " << std::boolalpha << vec.empty() << "\n";
    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";

    vec.push_back(42);
    std::cout << "After push_back:\n";
    std::cout << "Is vector empty? " << vec.empty() << "\n";
    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";

    return 0;
}
