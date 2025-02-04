#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> vec = {100, 200, 300, 400, 500};
    
    auto it = vec.begin();
    auto nextIt = std::next(it, 3);
    auto prevIt = std::prev(nextIt, 2);

    std::cout << "Third element: " << *nextIt << "\n"; // 400
    std::cout << "First element: " << *prevIt << "\n"; // 200

    return 0;
}
