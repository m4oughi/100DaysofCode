#include <iostream>
using namespace std;

class Openable {
public:
    virtual void open() = 0;  // Interface for opening objects
};

class Closeable {
public:
    virtual void close() = 0;  // Interface for closing objects
};

class Readable {
public:
    virtual void read() = 0;  // Interface for reading objects
};

class File : public Openable, public Closeable, public Readable {
public:
    void open() override {
        cout << "Opening file..." << endl;
    }

    void close() override {
        cout << "Closing file..." << endl;
    }

    void read() override {
        cout << "Reading file..." << endl;
    }
};

int main() {
    File file;
    file.open();
    file.read();
    file.close();
    return 0;
}
