#include <iostream>
#include <thread>
#include <map>
#include <functional>

void task1() { std::cout << "Task 1 executed by thread " << std::this_thread::get_id() << std::endl; }
void task2() { std::cout << "Task 2 executed by thread " << std::this_thread::get_id() << std::endl; }
void task3() { std::cout << "Task 3 executed by thread " << std::this_thread::get_id() << std::endl; }

int main() {
    std::map<std::thread::id, std::function<void()>> threadTasks;

    std::thread t1(task1);
    std::thread t2(task2);
    std::thread t3(task3);

    threadTasks[t1.get_id()] = task1;
    threadTasks[t2.get_id()] = task2;
    threadTasks[t3.get_id()] = task3;

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Thread Tasks Completed:" << std::endl;
    for (const auto& pair : threadTasks) {
        std::cout << "Thread ID: " << pair.first << std::endl;
    }

    return 0;
}
