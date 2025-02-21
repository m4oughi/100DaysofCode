#include <iostream>
#include <queue>

int main() {
    std::queue<int>::container_type container = {10, 20, 30, 40, 50};

    std::cout << "Size of the underlying container: " << container.size() << std::endl;  // 5

    return 0;
}
