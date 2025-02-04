#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    std::cout << "Vector size: " << vec.size() << "\n"; // 4
    std::cout << "Vector capacity: " << vec.capacity() << "\n"; // 4 (or higher, depending on implementation)
    
    return 0;
}
