#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    q2.push(100);
    q2.push(200);
    q2.push(300);

    std::cout << "Before swap:" << std::endl;
    std::cout << "Front of q1: " << q1.front() << ", Front of q2: " << q2.front() << std::endl;

    std::swap(q1, q2);

    std::cout << "After swap:" << std::endl;
    std::cout << "Front of q1: " << q1.front() << ", Front of q2: " << q2.front() << std::endl;

    return 0;
}
