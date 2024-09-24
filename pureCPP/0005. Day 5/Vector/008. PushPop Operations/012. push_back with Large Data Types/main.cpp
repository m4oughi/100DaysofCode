#include <iostream>
#include <vector>

struct LargeData {
    int data[1000];
};

int main() {
    std::vector<LargeData> large_vector;

    large_vector.push_back(LargeData());  // Pushing a large object

    std::cout << "Size after pushing LargeData: " << large_vector.size() << std::endl;
    std::cout << "Capacity after pushing LargeData: " << large_vector.capacity() << std::endl;

    return 0;
}
