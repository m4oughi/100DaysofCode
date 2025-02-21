#include <iostream>
#include <queue>

void printQueue(std::queue<int> q) {  // Pass by value to avoid modifying the original queue
    if (q.size() == 0) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    std::cout << "Queue elements: ";
    while (q.size() > 0) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::queue<int> q;
    printQueue(q);  // Should print "Queue is empty."

    q.push(10);
    q.push(20);
    q.push(30);
    
    printQueue(q);  // Should print 10 20 30

    return 0;
}
