#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overloaded assignment operator for deep copy
    String& operator=(const String& rhs) {
        if (this != &rhs) {
            delete[] str;
            str = new char[strlen(rhs.str) + 1];
            strcpy(str, rhs.str);
        }
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
    String s2;

    s2 = s1;  // Calls overloaded assignment operator

    s1.display();
    s2.display();

    return 0;
}
