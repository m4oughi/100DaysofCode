#include <iostream>
#include <list>

class TaskQueue {
    std::list<int> tasks; // Higher priority tasks have lower numbers

public:
    void addTask(int priority) {
        auto it = tasks.begin();
        while (it != tasks.end() && *it < priority) ++it;
        tasks.insert(it, priority);
    }

    void executeTask() {
        if (!tasks.empty()) {
            std::cout << "Executing task with priority: " << tasks.front() << '\n';
            tasks.pop_front();
        }
    }
};

int main() {
    TaskQueue queue;
    queue.addTask(3);
    queue.addTask(1);
    queue.addTask(2);
    
    queue.executeTask();
    queue.executeTask();
    queue.executeTask();
    
    return 0;
}
