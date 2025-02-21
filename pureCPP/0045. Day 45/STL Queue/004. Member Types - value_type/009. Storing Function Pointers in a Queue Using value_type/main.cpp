#include <iostream>
#include <queue>

void taskA() { std::cout << "Executing Task A\n"; }
void taskB() { std::cout << "Executing Task B\n"; }

int main() {
    std::queue<void(*)()> taskQueue;

    taskQueue.push(taskA);
    taskQueue.push(taskB);

    while (!taskQueue.empty()) {
        std::queue<void(*)()>::value_type task = taskQueue.front();
        task();  // Execute the function
        taskQueue.pop();
    }

    return 0;
}
