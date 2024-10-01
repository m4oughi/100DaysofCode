#include <iostream>
#include <cstring>

class StringWrapper {
private:
    char* str;
public:
    // Default constructor
    StringWrapper() : str(nullptr) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Constructor for C-style string
    StringWrapper(const char* s) {
        int len = std::strlen(s);
        str = new char[len + 1];
        std::strcpy(str, s);
        std::cout << "Constructor with C-string called." << std::endl;
    }

    // Constructor for single character repeated
    StringWrapper(char c, int repeatCount) {
        str = new char[repeatCount + 1];
        for (int i = 0; i < repeatCount; ++i) {
            str[i] = c;
        }
        str[repeatCount] = '\0';
        std::cout << "Constructor with repeating character called." << std::endl;
    }

    // Destructor
    ~StringWrapper() {
        delete[] str;
        std::cout << "Destructor called, memory deallocated." << std::endl;
    }

    void display() const {
        if (str) {
            std::cout << "String: " << str << std::endl;
        } else {
            std::cout << "Empty String." << std::endl;
        }
    }
};

int main() {
    StringWrapper sw1;                 // Default constructor
    StringWrapper sw2("Hello");        // Constructor with C-string
    StringWrapper sw3('*', 5);         // Constructor with repeated character
    sw1.display();
    sw2.display();
    sw3.display();
    return 0;
}
