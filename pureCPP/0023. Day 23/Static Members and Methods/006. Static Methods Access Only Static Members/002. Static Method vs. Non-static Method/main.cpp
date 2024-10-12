#include <iostream>
using namespace std;

class Example {
private:
    static int staticVar;  // Static member
    int nonStaticVar;      // Non-static member

public:
    Example() : nonStaticVar(5) {}

    static void staticMethod() {
        cout << "Static Variable: " << staticVar << endl;  // Accessing static member
        // cout << "Non-static Variable: " << nonStaticVar << endl;  // Error: cannot access non-static member
    }

    void nonStaticMethod() {
        cout << "Static Variable: " << staticVar << endl;    // Accessing static member
        cout << "Non-static Variable: " << nonStaticVar << endl;  // Accessing non-static member
    }
};

// Initialize static variable outside the class
int Example::staticVar = 10;

int main() {
    Example::staticMethod();  // Output: Static Variable: 10

    Example obj;
    obj.nonStaticMethod();  // Output: Static Variable: 10, Non-static Variable: 5

    return 0;
}
