#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;
    
    q1.push(10);
    q1.push(20);

    if (!q2.empty()) {
        q1.swap(q2);
    } else {
        std::cout << "Queue 2 is empty, swap not performed." << std::endl;
    }

    std::cout << "Queue 1 front: " << q1.front() << std::endl;  // 10 (no swap happened)

    return 0;
}
