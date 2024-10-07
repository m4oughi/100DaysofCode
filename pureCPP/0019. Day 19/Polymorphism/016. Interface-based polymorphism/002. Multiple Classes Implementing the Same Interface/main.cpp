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

class Image : public Printable {
public:
    void print() const override {
        cout << "Printing an image..." << endl;
    }
};

int main() {
    Document doc;
    Image img;

    Printable* printable1 = &doc;
    Printable* printable2 = &img;

    printable1->print();  // Calls Document's print method
    printable2->print();  // Calls Image's print method

    return 0;
}
