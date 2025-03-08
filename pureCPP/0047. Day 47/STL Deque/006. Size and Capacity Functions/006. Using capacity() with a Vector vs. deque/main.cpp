#include <iostream>
#include <vector>
#include <deque>

int main() {
    std::vector<int> vec;
    std::deque<int> dq;

    vec.reserve(100); // Vector has `capacity()`
    
    std::cout << "Vector capacity: " << vec.capacity() << "\n";
    std::cout << "Vector size: " << vec.size() << "\n";

    // `deque` does not have `capacity()`, but we can check its size
    std::cout << "Deque size: " << dq.size() << "\n";

    return 0;
}
