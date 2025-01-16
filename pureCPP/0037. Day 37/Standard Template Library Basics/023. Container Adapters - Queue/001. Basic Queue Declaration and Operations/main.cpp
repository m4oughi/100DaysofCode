#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Accessing the front and back elements
    std::cout << "Front element: " << q.front() << "\n";
    std::cout << "Back element: " << q.back() << "\n";

    // Removing the front element
    q.pop();
    std::cout << "Front element after pop: " << q.front() << "\n";

    return 0;
}
