#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() const = 0;
};

class Text : public Printable {
public:
    void print() const override {
        cout << "Printing text..." << endl;
    }
};

class Graph : public Printable {
public:
    void print() const override {
        cout << "Printing graph..." << endl;
    }
};

void printDocument(const Printable& p) {
    p.print();
}

int main() {
    Text text;
    Graph graph;

    printDocument(text);  // Polymorphism in function argument
    printDocument(graph);

    return 0;
}
