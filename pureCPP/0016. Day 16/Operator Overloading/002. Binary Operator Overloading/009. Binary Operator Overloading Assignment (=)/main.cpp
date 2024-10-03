#include <iostream>
using namespace std;

class String {
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String& operator=(const String& other) {
        if (this == &other) // Check for self-assignment
            return *this;

        delete[] str;
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);

        return *this;
    }

    void display() const {
        cout << str << endl;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello");
    String s2("World");

    s2 = s1;  // Assignment operator overloaded
    s2.display();  // Output: Hello

    return 0;
}
