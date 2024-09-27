#include <iostream>
using namespace std;

// Generic template
template <typename T>
void display(T value) {
    cout << "Template Value: " << value << endl;
}

// Overloaded function for const char*
void display(const char* value) {
    cout << "Overloaded for const char*: " << value << endl;
}

int main() {
    display(100);          // Calls the template version for int
    display(3.14);         // Calls the template version for double
    display("Hello!");     // Calls the overloaded version for const char*
    return 0;
}
