#include <iostream>
using namespace std;

class Document {
public:
    virtual void print() = 0;
    virtual ~Document() = 0;  // Pure virtual destructor
};

Document::~Document() {
    cout << "Document destroyed." << endl;
}

class PDF : public Document {
public:
    void print() override {
        cout << "Printing PDF document." << endl;
    }
    ~PDF() {
        cout << "PDF destroyed." << endl;
    }
};

class Word : public Document {
public:
    void print() override {
        cout << "Printing Word document." << endl;
    }
    ~Word() {
        cout << "Word destroyed." << endl;
    }
};

void printDocument(Document* doc) {
    doc->print();  // Polymorphic behavior
}

int main() {
    Document* doc1 = new PDF();
    Document* doc2 = new Word();

    printDocument(doc1);  // Outputs "Printing PDF document."
    printDocument(doc2);  // Outputs "Printing Word document."

    delete doc1;  // Outputs "PDF destroyed." followed by "Document destroyed."
    delete doc2;  // Outputs "Word destroyed." followed by "Document destroyed."

    return 0;
}
