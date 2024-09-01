#include <iostream>
#include <cstring>
using namespace std;

// Base class
class Base {
private:
    char* data;
public:
    Base(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    ~Base() {
        delete[] data;
    }

    // Type conversion operator to convert Base to const char*
    operator const char*() const {
        return data;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived(const char* str) : Base(str) {}
};

int main() {
    Derived d("Hello, world!");
    const char* text = d; // Implicit conversion from Derived to const char*
    cout << "Text: " << text << endl;

    return 0;
}
