#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Front before modification: " << q.front() << std::endl;  // 1

    q.front() = 100;  // Modify the front element

    std::cout << "Front after modification: " << q.front() << std::endl;  // 100

    return 0;
}
