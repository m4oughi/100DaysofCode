#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    std::cout << "Front: " << q.front() << "\n"; // 5
    std::cout << "Back: " << q.back() << "\n"; // 15

    return 0;
}
