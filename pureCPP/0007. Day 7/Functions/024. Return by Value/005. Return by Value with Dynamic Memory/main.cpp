#include <iostream>

class String {
private:
    char* data;

public:
    String(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    ~String() {
        delete[] data;
    }

    // Copy constructor
    String(const String& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Assignment operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Return by value
    String getGreeting() const {
        return String("Hello, world!");
    }

    void display() const {
        std::cout << data << std::endl;
    }
};

int main() {
    String greeting = String("Sample").getGreeting();  // Calls getGreeting(), which returns by value
    greeting.display();  // Output: Hello, world!
    return 0;
}
