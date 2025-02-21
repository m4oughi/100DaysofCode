#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    // ERROR: std::queue does not support operator[]
    // std::cout << q[1] << std::endl;

    std::cout << "Cannot access elements randomly in std::queue!" << std::endl;

    return 0;
}
