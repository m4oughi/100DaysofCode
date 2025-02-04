#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    std::cout << "Queue size: " << q.size() << "\n"; // 3

    q.pop();
    
    std::cout << "Queue size after pop: " << q.size() << "\n"; // 2

    return 0;
}
