#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front element: " << q.front() << "\n"; // 10
    std::cout << "Back element: " << q.back() << "\n";   // 30

    q.pop(); // Removes 10

    std::cout << "New front element: " << q.front() << "\n"; // 20

    return 0;
}
