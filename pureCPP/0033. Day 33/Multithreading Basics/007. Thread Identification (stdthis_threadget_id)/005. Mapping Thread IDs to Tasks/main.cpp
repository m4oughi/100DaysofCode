#include <iostream>
#include <thread>
#include <unordered_map>

void task1() {
    std::cout << "Task 1 running, ID: " << std::this_thread::get_id() << std::endl;
}

void task2() {
    std::cout << "Task 2 running, ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::unordered_map<std::thread::id, std::string> threadMap;

    std::thread t1(task1);
    std::thread t2(task2);

    threadMap[t1.get_id()] = "Task 1";
    threadMap[t2.get_id()] = "Task 2";

    t1.join();
    t2.join();

    std::cout << "Thread Task Mappings:" << std::endl;
    for (const auto& pair : threadMap) {
        std::cout << "Thread ID: " << pair.first << " - Task: " << pair.second << std::endl;
    }

    return 0;
}
