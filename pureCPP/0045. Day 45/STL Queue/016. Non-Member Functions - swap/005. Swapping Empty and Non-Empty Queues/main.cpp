#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    std::cout << "Before swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    std::swap(q1, q2);

    std::cout << "After swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    return 0;
}
