#include <iostream>
#include <queue>

struct PrintJob {
    int jobId;
    std::string fileName;
};

int main() {
    std::queue<PrintJob> printQueue;

    printQueue.push({101, "report.pdf"});
    printQueue.push({102, "image.png"});
    printQueue.push({103, "slides.pptx"});

    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        std::cout << "Printing: " << job.fileName << " (Job ID: " << job.jobId << ")" << std::endl;
        printQueue.pop();
    }

    return 0;
}
