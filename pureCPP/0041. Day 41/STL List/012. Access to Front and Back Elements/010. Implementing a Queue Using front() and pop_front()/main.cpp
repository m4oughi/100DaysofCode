#include <iostream>
#include <list>

class Queue {
private:
    std::list<int> queue;

public:
    void enqueue(int value) {
        queue.push_back(value);
    }

    void dequeue() {
        if (!queue.empty()) {
            std::cout << "Dequeued: " << queue.front() << std::endl;
            queue.pop_front();
        } else {
            std::cout << "Queue is empty.\n";
        }
    }

    void displayFront() {
        if (!queue.empty()) {
            std::cout << "Front element: " << queue.front() << std::endl;
        } else {
            std::cout << "Queue is empty.\n";
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.displayFront();
    q.dequeue();
    q.displayFront();
    
    return 0;
}
