#include <iostream>
#include <queue>

struct PrintJob {
    int jobId;
    std::string fileName;
};

int main() {
    std::queue<PrintJob> printQueue;

    printQueue.push({1, "document.pdf"});
    printQueue.push({2, "image.png"});
    printQueue.push({3, "report.docx"});

    std::cout << "Last print job added: " << printQueue.back().fileName << std::endl;  // "report.docx"

    printQueue.push({4, "presentation.pptx"});
    std::cout << "Updated last print job: " << printQueue.back().fileName << std::endl;  // "presentation.pptx"

    return 0;
}
