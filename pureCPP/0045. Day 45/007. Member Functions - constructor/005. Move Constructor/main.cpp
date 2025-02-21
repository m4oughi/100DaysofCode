#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1;
    q1.push(100);
    q1.push(200);

    std::queue<int> q2(std::move(q1));  // Move constructor

    std::cout << "Front of moved queue q2: " << q2.front() << std::endl;  // 100
    std::cout << "Is q1 empty after move? " << std::boolalpha << q1.empty() << std::endl;  // true

    return 0;
}
