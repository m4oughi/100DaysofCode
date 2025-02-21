#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(1);
    q1.push(2);
    q2.push(100);
    q2.push(200);

    try {
        q1.swap(q2);  // No exception should be thrown
        std::cout << "Swap successful.\n";
    } catch (...) {
        std::cerr << "Unexpected exception during swap!\n";
    }

    std::cout << "Front of q1: " << q1.front() << ", Front of q2: " << q2.front() << std::endl;

    return 0;
}
