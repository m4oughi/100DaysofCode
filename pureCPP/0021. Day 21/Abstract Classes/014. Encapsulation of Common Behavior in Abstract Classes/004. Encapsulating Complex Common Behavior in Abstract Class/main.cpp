#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class Document {
protected:
    string content;
public:
    Document(string text) : content(text) {}
    
    // Common behavior: displaying content
    void displayContent() {
        cout << "Content: " << content << endl;
    }

    // Virtual function: formatting behavior to be customized by derived classes
    virtual void format() = 0;
};

// Derived Class 1
class PDF : public Document {
public:
    PDF(string text) : Document(text) {}

    void format() override {
        cout << "Formatting document as PDF." << endl;
    }
};

// Derived Class 2
class Word : public Document {
public:
    Word(string text) : Document(text) {}

    void format() override {
        cout << "Formatting document as Word." << endl;
    }
};

int main() {
    PDF pdf("This is a PDF document.");
    Word word("This is a Word document.");

    pdf.displayContent();   // Outputs: Content: This is a PDF document.
    pdf.format();           // Outputs: Formatting document as PDF.

    word.displayContent();  // Outputs: Content: This is a Word document.
    word.format();          // Outputs: Formatting document as Word.

    return 0;
}
