#include <iostream>
#include <memory_resource>
#include <vector>

int main() {
    std::pmr::monotonic_buffer_resource pool;
    std::pmr::vector<int> vec(&pool); // Uses custom allocator

    vec.push_back(10);
    vec.push_back(20);
    
    std::cout << "Vector with custom memory resource: " << vec[0] << ", " << vec[1] << std::endl;
    return 0;
}
