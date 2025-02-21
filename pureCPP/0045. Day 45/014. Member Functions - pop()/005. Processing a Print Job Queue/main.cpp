#include <iostream>
#include <queue>

struct PrintJob {
    int jobID;
    std::string document;

    PrintJob(int id, std::string doc) : jobID(id), document(doc) {}
};

int main() {
    std::queue<PrintJob> printQueue;

    printQueue.emplace(1, "Report.pdf");
    printQueue.emplace(2, "Invoice.docx");
    printQueue.emplace(3, "Presentation.pptx");

    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        std::cout << "Printing: " << job.document << " (Job ID: " << job.jobID << ")" << std::endl;
        printQueue.pop();
    }

    return 0;
}
