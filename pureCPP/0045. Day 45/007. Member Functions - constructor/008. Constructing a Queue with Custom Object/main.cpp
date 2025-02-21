#include <iostream>
#include <queue>

class Task {
public:
    int id;
    std::string description;
    
    Task(int i, std::string d) : id(i), description(d) {}
};

int main() {
    std::queue<Task> taskQueue;
    
    taskQueue.emplace(1, "Fix Bug");
    taskQueue.emplace(2, "Implement Feature");

    std::cout << "Front Task: " << taskQueue.front().description << std::endl;  // Fix Bug

    return 0;
}
