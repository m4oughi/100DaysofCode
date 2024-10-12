#include <iostream>
using namespace std;

class Parent {
public:
    static void showMessage() {  // Static member function
        cout << "Hello from Parent class!" << endl;
    }
};

class Child : public Parent {
    // Inherits the static member function implicitly
};

int main() {
    Child::showMessage();  // Accessing static function via derived class
    return 0;
}
