#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* data;
    int length;
public:
    String(const char* str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    char& operator[](int index) {
        return data[index];  // Return the character at index
    }

    const char operator[](int index) const {
        return data[index];  // Const version for access
    }

    void display() const {
        cout << data << endl;
    }

    ~String() {
        delete[] data;
    }
};

int main() {
    String s("Hello");
    s[1] = 'a';  // Modify character using subscript operator
    s.display();  // Output: Hallo
    return 0;
}
