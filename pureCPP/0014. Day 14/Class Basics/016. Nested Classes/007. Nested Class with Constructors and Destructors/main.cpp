#include <iostream>
using namespace std;

class Outer {
public:
    Outer() {
        cout << "Outer class constructor called." << endl;
    }

    class Inner {
    public:
        Inner() {
            cout << "Inner class constructor called." << endl;
        }

        ~Inner() {
            cout << "Inner class destructor called." << endl;
        }

        void display() {
            cout << "Inner class method called." << endl;
        }
    };

    ~Outer() {
        cout << "Outer class destructor called." << endl;
    }
};

int main() {
    Outer::Inner innerObj;
    innerObj.display();

    return 0;
}
