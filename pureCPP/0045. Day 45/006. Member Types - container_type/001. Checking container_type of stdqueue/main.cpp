#include <iostream>
#include <queue>

int main() {
    std::queue<int>::container_type container;

    container.push_back(10);
    container.push_back(20);
    container.push_back(30);

    std::cout << "First element in the underlying container: " << container.front() << std::endl;  // 10

    return 0;
}
