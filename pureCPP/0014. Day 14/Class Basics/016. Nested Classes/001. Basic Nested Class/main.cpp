#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {  // Nested class
    public:
        void display() {
            cout << "Inner class function called!" << endl;
        }
    };
};

int main() {
    Outer::Inner innerObj;
    innerObj.display();

    return 0;
}
