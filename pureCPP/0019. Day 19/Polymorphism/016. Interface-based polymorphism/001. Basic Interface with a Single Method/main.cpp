#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() const = 0;  // Pure virtual function
};

class Document : public Printable {
public:
    void print() const override {
        cout << "Printing a document..." << endl;
    }
};

int main() {
    Document doc;
    Printable* printable = &doc;  // Upcasting to interface
    printable->print();  // Calls Document's print method

    return 0;
}
