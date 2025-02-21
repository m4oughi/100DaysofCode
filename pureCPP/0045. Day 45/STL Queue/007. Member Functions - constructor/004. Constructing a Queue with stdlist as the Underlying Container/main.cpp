#include <iostream>
#include <queue>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30};
    std::queue<int, std::list<int>> q(lst);  // Using list as underlying container

    std::cout << "Front of queue: " << q.front() << std::endl;  // 10

    return 0;
}
