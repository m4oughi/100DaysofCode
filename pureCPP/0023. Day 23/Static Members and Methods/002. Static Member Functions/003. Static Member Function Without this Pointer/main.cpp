#include <iostream>
using namespace std;

class Example {
public:
    int data;

    static void show() {
        // cout << data;  // Error: 'this' pointer not accessible
        cout << "Static function cannot access instance data." << endl;
    }
};

int main() {
    Example::show();  // Call the static member function
    return 0;
}
