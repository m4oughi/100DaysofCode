#include <iostream>
#include <queue>

void clearQueue(std::queue<int>& q) {
    if (q.size() == 0) {
        std::cout << "Queue is already empty." << std::endl;
        return;
    }

    std::cout << "Clearing queue..." << std::endl;
    while (q.size() > 0) {
        q.pop();
    }
    std::cout << "Queue is now empty." << std::endl;
}

int main() {
    std::queue<int> q;
    clearQueue(q);  // Should print "Queue is already empty."

    q.push(10);
    q.push(20);
    q.push(30);
    
    clearQueue(q);  // Should clear queue

    return 0;
}
