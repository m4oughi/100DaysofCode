#include <iostream>
#include <deque>

class TaskQueue {
private:
    std::deque<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
    }

    void processTasks() {
        for (const auto& task : tasks) {
            std::cout << "Processing: " << task << "\n";
        }
        reset();  // Clear tasks after processing
    }

    void reset() {
        tasks.clear();
        std::cout << "Task queue cleared.\n";
    }
};

int main() {
    TaskQueue queue;
    queue.addTask("Download File");
    queue.addTask("Process Data");
    queue.addTask("Upload Results");

    queue.processTasks();  // Processes and clears tasks

    return 0;
}
