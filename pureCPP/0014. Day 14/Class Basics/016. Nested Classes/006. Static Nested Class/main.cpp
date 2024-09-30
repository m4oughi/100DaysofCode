#include <iostream>
using namespace std;

class Outer {
public:
    static class Inner {  // Static nested class
    public:
        static void display() {
            cout << "Inside static nested class!" << endl;
        }
    };
};

int main() {
    Outer::Inner::display();  // Access directly without object instantiation

    return 0;
}
