#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    std::queue<int>::size_type queueSize = q.size();  

    std::cout << "Queue Size: " << queueSize << std::endl;  // 3

    return 0;
}
