#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<int> dq(100, 5);
    std::vector<int> vec(100, 5);

    std::cout << "Size of deque object: " << sizeof(dq) << std::endl;
    std::cout << "Size of vector object: " << sizeof(vec) << std::endl;

    return 0;
}
