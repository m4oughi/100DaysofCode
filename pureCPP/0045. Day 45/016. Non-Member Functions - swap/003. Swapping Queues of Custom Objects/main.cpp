#include <iostream>
#include <queue>

struct Task {
    int id;
    std::string description;

    Task(int i, std::string d) : id(i), description(d) {}
};

int main() {
    std::queue<Task> q1, q2;

    q1.emplace(1, "Process Orders");
    q1.emplace(2, "Generate Reports");

    q2.emplace(101, "Backup Data");
    q2.emplace(102, "Send Emails");

    std::cout << "Before swap, q1 front: " << q1.front().description << std::endl;
    std::cout << "Before swap, q2 front: " << q2.front().description << std::endl;

    std::swap(q1, q2);

    std::cout << "After swap, q1 front: " << q1.front().description << std::endl;
    std::cout << "After swap, q2 front: " << q2.front().description << std::endl;

    return 0;
}
