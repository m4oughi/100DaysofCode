#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;  // Interface for printing
};

class Saveable {
public:
    virtual void save() = 0;  // Interface for saving
};

class Document : public Printable, public Saveable {
public:
    void print() override {
        cout << "Printing the document" << endl;
    }

    void save() override {
        cout << "Saving the document" << endl;
    }
};

class Photo : public Printable {
public:
    void print() override {
        cout << "Printing the photo" << endl;
    }
    // Photo does not need to implement Saveable
};

int main() {
    Document doc;
    Photo photo;
    
    doc.print();
    doc.save();
    
    photo.print();
    return 0;
}
