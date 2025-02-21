#include <iostream>
#include <queue>

int main() {
    std::queue<int>::container_type container = {1, 2, 3, 4, 5};

    std::cout << "Initial container contents: ";
    for (int val : container) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    container.push_back(6);  
    std::cout << "After adding element: " << container.back() << std::endl;  // 6

    return 0;
}
