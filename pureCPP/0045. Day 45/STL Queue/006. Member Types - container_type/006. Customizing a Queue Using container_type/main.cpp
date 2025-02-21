#include <iostream>
#include <queue>
#include <list>

int main() {
    std::queue<int, std::list<int>>::container_type container;

    container.push_back(50);
    container.push_back(100);

    std::cout << "First element in container: " << container.front() << std::endl;  // 50
    std::cout << "Last element in container: " << container.back() << std::endl;   // 100

    return 0;
}
