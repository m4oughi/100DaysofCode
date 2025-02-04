#include <iostream>

class CircularQueue {
    int *arr, front, rear, capacity, size;

public:
    CircularQueue(int cap) : capacity(cap), front(0), rear(-1), size(0) {
        arr = new int[cap];
    }

    ~CircularQueue() {
        delete[] arr;
    }

    void enqueue(int x) {
        if (size == capacity) {
            std::cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            std::cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int getFront() {
        return size == 0 ? -1 : arr[front];
    }

    int getSize() {
        return size;
    }
};

int main() {
    CircularQueue q(3);
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4); // Should print "Queue is full"

    std::cout << "Front: " << q.getFront() << "\n"; // 1

    q.dequeue();
    std::cout << "Front after dequeue: " << q.getFront() << "\n"; // 2

    return 0;
}
