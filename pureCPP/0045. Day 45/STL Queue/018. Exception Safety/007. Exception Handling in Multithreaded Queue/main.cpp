#include <iostream>
#include <queue>
#include <stdexcept>

class SafeQueue {
private:
    std::queue<int> q;

public:
    void push(int value) noexcept {
        try {
            q.push(value);
        } catch (...) {
            std::cerr << "Exception caught in push().\n";
        }
    }

    void pop() noexcept {
        try {
            if (q.empty()) throw std::runtime_error("Queue is empty!");
            q.pop();
        } catch (const std::exception& e) {
            std::cerr << "Exception caught in pop(): " << e.what() << std::endl;
        }
    }

    int front() {
        if (q.empty()) throw std::runtime_error("Queue is empty!");
        return q.front();
    }

    bool empty() const noexcept {
        return q.empty();
    }
};

int main() {
    SafeQueue sq;
    
    sq.push(10);
    sq.push(20);
    sq.pop();
    
    try {
        std::cout << "Front: " << sq.front() << std::endl;
        sq.pop();
        sq.pop();  // Will throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
