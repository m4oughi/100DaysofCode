#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> jobQueue;

    jobQueue.push("Process Order #101");
    jobQueue.push("Process Order #102");
    jobQueue.push("Process Order #103");

    std::cout << "Next job to process: " << jobQueue.front() << std::endl;  // "Process Order #101"

    return 0;
}
