#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(5);
    std::cout << "Queue size after 1st push: " << q.size() << std::endl;  // 1

    q.push(10);
    std::cout << "Queue size after 2nd push: " << q.size() << std::endl;  // 2

    q.push(15);
    std::cout << "Queue size after 3rd push: " << q.size() << std::endl;  // 3

    return 0;
}
