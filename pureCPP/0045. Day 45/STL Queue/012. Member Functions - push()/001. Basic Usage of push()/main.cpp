#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Queue front: " << q.front() << std::endl;  // 10
    std::cout << "Queue back: " << q.back() << std::endl;    // 30

    return 0;
}
