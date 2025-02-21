#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(10);  
    q.push(20);
    q.push(30);

    std::cout << "Front: " << q.front() << std::endl;  // 10
    std::cout << "Back: " << q.back() << std::endl;    // 30

    q.pop();  // Remove 10

    std::cout << "New Front: " << q.front() << std::endl;  // 20

    return 0;
}
