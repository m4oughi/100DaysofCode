#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;
    
    q1.push(5);
    q1.push(15);
    q1.push(25);

    std::cout << "Before swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    q1.swap(q2); // Swapping q1 (non-empty) with q2 (empty)

    std::cout << "After swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    return 0;
}
