#include <iostream>
#include <stack>
#include <vector>
#include <list>

struct Task {
    int id;
    std::string description;

    Task(int id, std::string desc) : id(id), description(desc) {}

    void display() const {
        std::cout << "Task ID: " << id << ", Description: " << description << std::endl;
    }
};

int main() {
    std::stack<Task, std::deque<Task>> taskStackDeque;
    std::stack<Task, std::vector<Task>> taskStackVector;
    std::stack<Task, std::list<Task>> taskStackList;

    Task t1(1, "Fix bug");
    Task t2(2, "Implement feature");
    Task t3(3, "Code review");

    taskStackDeque.push(t1);
    taskStackVector.push(t2);
    taskStackList.push(t3);

    std::cout << "Deque stack top: "; taskStackDeque.top().display();
    std::cout << "Vector stack top: "; taskStackVector.top().display();
    std::cout << "List stack top: "; taskStackList.top().display();

    return 0;
}
