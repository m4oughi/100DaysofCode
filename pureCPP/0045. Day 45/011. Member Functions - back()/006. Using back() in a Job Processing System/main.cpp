#include <iostream>
#include <queue>

struct Job {
    int jobId;
    std::string jobName;
};

int main() {
    std::queue<Job> jobQueue;

    jobQueue.push({1, "Print Document"});
    jobQueue.push({2, "Scan Document"});
    jobQueue.push({3, "Send Email"});

    std::cout << "Last job added: " << jobQueue.back().jobName << std::endl;  // "Send Email"

    return 0;
}
