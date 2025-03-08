#include <iostream>
#include <deque>

struct PrintJob {
    int id;
    std::string document;
};

int main() {
    std::deque<PrintJob> printQueue;

    // Adding print jobs
    printQueue.push_back({1, "Report.pdf"});
    printQueue.push_back({2, "Invoice.docx"});
    printQueue.push_back({3, "Presentation.pptx"});

    std::cout << "Processing print jobs...\n";
    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        std::cout << "Printing Job ID: " << job.id << " - " << job.document << "\n";
        printQueue.pop_front();
    }

    return 0;
}
