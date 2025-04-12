#include <iostream>

enum class Status : uint8_t {
    Idle = 0,
    Running = 1,
    Finished = 2
};

struct Task {
    Status status;
    uint8_t priority;
};

int main() {
    Task t = { Status::Running, 5 };
    std::cout << "Task Priority: " << (int)t.priority << std::endl;
}
