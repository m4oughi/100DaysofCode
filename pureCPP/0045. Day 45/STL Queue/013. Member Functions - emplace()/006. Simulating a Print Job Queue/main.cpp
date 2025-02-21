#include <iostream>
#include <queue>

struct PrintJob {
    int jobID;
    std::string documentName;

    PrintJob(int id, std::string name) : jobID(id), documentName(name) {
        std::cout << "Print Job Created: " << jobID << " - " << documentName << std::endl;
    }
};

int main() {
    std::queue<PrintJob> printQueue;

    printQueue.emplace(1, "Report.pdf");
    printQueue.emplace(2, "Invoice.docx");
    printQueue.emplace(3, "Presentation.pptx");

    return 0;
}
