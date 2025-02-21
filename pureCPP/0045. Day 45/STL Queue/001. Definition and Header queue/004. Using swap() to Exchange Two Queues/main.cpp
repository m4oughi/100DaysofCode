#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    q2.push(10);
    q2.push(20);

    q1.swap(q2);  // Swap contents of q1 and q2

    std::cout << "Front of q1: " << q1.front() << std::endl;  // 10
    std::cout << "Front of q2: " << q2.front() << std::endl;  // 1

    return 0;
}
