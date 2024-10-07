#include <iostream>
using namespace std;

template <typename T>
class Printer {
public:
    void print(const T& value) {
        cout << "Value: " << value << endl;
    }
};

template <>
class Printer<char*> {
public:
    void print(const char* value) {
        cout << "String: " << value << endl;
    }
};

int main() {
    Printer<int> intPrinter;
    Printer<char*> stringPrinter;

    intPrinter.print(42);           // Prints integer value
    stringPrinter.print("Hello");    // Prints string value

    return 0;
}
