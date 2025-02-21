#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);

    std::cout << "Front before pop: " << q.front() << std::endl;  // 5
    q.pop();
    std::cout << "Front after pop: " << q.front() << std::endl;   // 15

    return 0;
}
