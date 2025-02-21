#include <iostream>
#include <queue>

int main() {
    std::queue<int>::container_type container1 = {1, 2, 3};
    std::queue<int>::container_type container2 = {10, 20, 30};

    std::cout << "Before Swap:" << std::endl;
    std::cout << "Container 1 Front: " << container1.front() << std::endl;  // 1
    std::cout << "Container 2 Front: " << container2.front() << std::endl;  // 10

    container1.swap(container2);

    std::cout << "After Swap:" << std::endl;
    std::cout << "Container 1 Front: " << container1.front() << std::endl;  // 10
    std::cout << "Container 2 Front: " << container2.front() << std::endl;  // 1

    return 0;
}
