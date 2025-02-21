#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;
    
    q1.push(1);
    q1.push(2);
    q1.push(3);

    q2.push(10);
    q2.push(20);
    q2.push(30);

    std::cout << "Before swap:" << std::endl;
    std::cout << "Front of q1: " << q1.front() << ", Front of q2: " << q2.front() << std::endl;

    q1.swap(q2);  // Swapping the contents

    std::cout << "After swap:" << std::endl;
    std::cout << "Front of q1: " << q1.front() << ", Front of q2: " << q2.front() << std::endl;

    return 0;
}
