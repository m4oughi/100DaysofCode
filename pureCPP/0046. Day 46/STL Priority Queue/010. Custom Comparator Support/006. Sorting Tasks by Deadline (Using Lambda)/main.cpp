#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int id;
    int deadline;

    Task(int i, int d) : id(i), deadline(d) {}
};

int main() {
    auto cmp = [](const Task& a, const Task& b) { return a.deadline > b.deadline; };

    std::priority_queue<Task, std::vector<Task>, decltype(cmp)> pq(cmp);

    pq.push(Task(1, 10));
    pq.push(Task(2, 5));
    pq.push(Task(3, 20));

    std::cout << "Processing tasks by earliest deadline:\n";
    while (!pq.empty()) {
        std::cout << "Task ID: " << pq.top().id << ", Deadline: " << pq.top().deadline << "\n";
        pq.pop();
    }
    return 0;
}
