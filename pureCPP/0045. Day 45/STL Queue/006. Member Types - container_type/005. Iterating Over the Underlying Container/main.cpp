#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    std::queue<int>::container_type container = q._Get_container();  // Extract container

    std::cout << "Queue elements from container: ";
    for (const int& val : container) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
