#include <iostream>
#include <queue>

struct PrintJob {
    int jobId;
    std::string fileName;
};

int main() {
    std::queue<PrintJob> printQueue;

    printQueue.push({101, "document1.pdf"});
    printQueue.push({102, "image.png"});
    printQueue.push({103, "presentation.pptx"});

    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        std::cout << "Printing Job " << job.jobId << ": " << job.fileName << std::endl;
        printQueue.pop();
    }

    return 0;
}
