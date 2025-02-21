#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);

    std::queue<int> q2(q1);  // Copy constructor

    std::cout << "Front of q2: " << q2.front() << std::endl;  // 10

    return 0;
}
