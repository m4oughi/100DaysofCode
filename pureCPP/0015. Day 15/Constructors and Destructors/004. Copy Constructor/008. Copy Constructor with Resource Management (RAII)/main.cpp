#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        std::cout << "Constructor called, allocated str: " << str << std::endl;
    }

    // Copy constructor with deep copy
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        std::cout << "Copy constructor called, copied str: " << str << std::endl;
    }

    // Destructor
    ~String() {
        std::cout << "Destructor called, deleting str: " << str << std::endl;
        delete[] str;
    }
};

int main() {
    String s1("Hello");  // Constructor called
    String s2 = s1;      // Copy constructor called (deep copy)
    return 0;
}
