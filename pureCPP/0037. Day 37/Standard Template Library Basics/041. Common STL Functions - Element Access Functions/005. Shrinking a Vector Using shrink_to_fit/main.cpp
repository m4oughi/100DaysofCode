#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(100);
    std::cout << "Initial capacity: " << vec.capacity() << "\n";

    vec.resize(10);
    std::cout << "Capacity after resize: " << vec.capacity() << "\n";

    vec.shrink_to_fit();
    std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << "\n";

    return 0;
}
