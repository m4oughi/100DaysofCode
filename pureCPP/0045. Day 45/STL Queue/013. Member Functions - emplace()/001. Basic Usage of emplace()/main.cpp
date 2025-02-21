#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    q.emplace(10);
    q.emplace(20);
    q.emplace(30);

    std::cout << "Queue front: " << q.front() << std::endl;  // 10
    std::cout << "Queue back: " << q.back() << std::endl;    // 30

    return 0;
}
