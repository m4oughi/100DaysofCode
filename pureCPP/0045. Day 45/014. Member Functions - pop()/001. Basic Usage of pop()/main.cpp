#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Before pop: Front = " << q.front() << std::endl;

    q.pop();  // Remove the front element (10)

    std::cout << "After pop: Front = " << q.front() << std::endl;  // 20

    return 0;
}
