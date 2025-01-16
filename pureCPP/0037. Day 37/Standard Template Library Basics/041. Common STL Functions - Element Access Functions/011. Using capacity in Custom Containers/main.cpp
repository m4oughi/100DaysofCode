#include <iostream>
#include <vector>

void printCapacityInfo(const std::vector<int>& vec) {
    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";
}

int main() {
    std::vector<int> vec;

    for (int i = 0; i < 20; ++i) {
        vec.push_back(i);
        printCapacityInfo(vec); // Observe how capacity grows
    }

    return 0;
}
