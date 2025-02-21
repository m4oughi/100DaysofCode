#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;  // Defining a queue of integers

    q.push(10);  // Push elements
    q.push(20);
    q.push(30);

    std::cout << "Front: " << q.front() << std::endl;  // 10
    std::cout << "Back: " << q.back() << std::endl;    // 30

    q.pop();  // Remove the front element (10)

    std::cout << "Front after pop: " << q.front() << std::endl;  // 20

    return 0;
}
