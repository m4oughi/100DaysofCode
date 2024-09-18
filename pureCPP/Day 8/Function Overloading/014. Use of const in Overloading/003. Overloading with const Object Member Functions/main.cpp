#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Non-const function called" << endl;
    }

    void display() const {
        cout << "Const function called" << endl;
    }
};

int main() {
    MyClass obj1;
    const MyClass obj2;
    
    obj1.display();  // Calls non-const version
    obj2.display();  // Calls const version

    return 0;
}
