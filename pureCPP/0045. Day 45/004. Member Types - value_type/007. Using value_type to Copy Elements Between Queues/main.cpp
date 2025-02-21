#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1;
    q1.push(5);
    q1.push(10);
    q1.push(15);

    std::queue<int> q2;

    while (!q1.empty()) {
        std::queue<int>::value_type temp = q1.front();
        q2.push(temp);
        q1.pop();
    }

    std::cout << "Front of new queue: " << q2.front() << std::endl;  // 5

    return 0;
}
