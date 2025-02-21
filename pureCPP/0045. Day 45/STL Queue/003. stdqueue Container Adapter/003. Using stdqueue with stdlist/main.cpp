#include <iostream>
#include <queue>
#include <list>

int main() {
    std::queue<int, std::list<int>> q;

    q.push(5);
    q.push(10);
    q.push(15);

    std::cout << "Front: " << q.front() << std::endl;  // 5
    std::cout << "Back: " << q.back() << std::endl;    // 15

    q.pop();  // Remove 5

    std::cout << "New Front: " << q.front() << std::endl;  // 10

    return 0;
}
