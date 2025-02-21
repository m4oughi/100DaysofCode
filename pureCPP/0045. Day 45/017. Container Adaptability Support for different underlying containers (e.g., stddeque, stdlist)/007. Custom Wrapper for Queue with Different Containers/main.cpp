#include <iostream>
#include <queue>
#include <list>

template <typename T, typename Container = std::deque<T>>
class MyQueue {
private:
    std::queue<T, Container> q;

public:
    void push(const T& value) { q.push(value); }
    void pop() { q.pop(); }
    T front() { return q.front(); }
    T back() { return q.back(); }
    bool empty() const { return q.empty(); }
    size_t size() const { return q.size(); }
};

int main() {
    MyQueue<int, std::list<int>> listQueue;
    listQueue.push(10);
    listQueue.push(20);
    listQueue.push(30);

    std::cout << "Front: " << listQueue.front() << ", Back: " << listQueue.back() << std::endl;

    return 0;
}
