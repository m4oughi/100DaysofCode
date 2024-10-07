#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;  // Pure virtual function
};

class Document : public Printable {
public:
    void print() override {
        cout << "Printing document" << endl;
    }
};

int main() {
    Document doc;
    doc.print();  // Calls Document's print method

    return 0;
}
