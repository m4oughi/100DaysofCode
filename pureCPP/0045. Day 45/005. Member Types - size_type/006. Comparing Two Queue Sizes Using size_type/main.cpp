#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;

    q1.push(5);
    q1.push(10);

    q2.push(1);
    q2.push(2);
    q2.push(3);

    std::queue<int>::size_type size1 = q1.size();
    std::queue<int>::size_type size2 = q2.size();

    if (size1 > size2) {
        std::cout << "Queue 1 is larger.\n";
    } else if (size1 < size2) {
        std::cout << "Queue 2 is larger.\n";
    } else {
        std::cout << "Both queues have the same size.\n";
    }

    return 0;
}
