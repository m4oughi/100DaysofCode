#include <iostream>
#include <queue>
#include <utility>  // For std::swap

int main() {
    std::queue<int> q1, q2;

    q1.push(100);
    q1.push(200);

    q2.push(300);
    q2.push(400);
    q2.push(500);

    std::cout << "Before std::swap(): q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    std::swap(q1, q2); // Calls q1.swap(q2) internally

    std::cout << "After std::swap(): q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    return 0;
}
