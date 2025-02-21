#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(1);
    q1.push(2);

    q2.push(100);
    q2.push(200);
    q2.push(300);
    q2.push(400);

    std::cout << "Size before swap: q1 = " << q1.size() << ", q2 = " << q2.size() << std::endl;

    std::swap(q1, q2);

    std::cout << "Size after swap: q1 = " << q1.size() << ", q2 = " << q2.size() << std::endl;

    return 0;
}
