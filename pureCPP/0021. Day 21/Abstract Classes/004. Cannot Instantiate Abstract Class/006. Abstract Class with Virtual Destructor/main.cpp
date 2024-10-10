#include <iostream>
using namespace std;

class Document {
public:
    virtual void print() = 0;
    virtual ~Document() {
        cout << "Document destroyed." << endl;
    }
};

class PDF : public Document {
public:
    void print() override {
        cout << "Printing PDF document." << endl;
    }
    ~PDF() {
        cout << "PDF destroyed." << endl;
    }
};

int main() {
    // Document doc;  // Error: cannot instantiate abstract class
    PDF pdf;
    pdf.print();
    return 0;
}
