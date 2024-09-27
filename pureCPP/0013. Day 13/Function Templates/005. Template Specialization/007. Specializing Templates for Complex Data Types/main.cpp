#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Printer {
public:
    void print(const T& value) const {
        cout << "Printing: " << value << endl;
    }
};

// Specialization for std::string type
template <>
class Printer<string> {
public:
    void print(const string& value) const {
        cout << "Printing string: " << value << endl;
    }
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(100);  // Generic version

    Printer<string> stringPrinter;
    stringPrinter.print("Hello, World!");  // Specialized version for string

    return 0;
}
