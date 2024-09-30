#include <iostream>
using namespace std;

class Outer {
public:
    class Middle {
    public:
        class Inner {
        public:
            void show() {
                cout << "Inside Inner class of Middle class of Outer class" << endl;
            }
        };
    };
};

int main() {
    Outer::Middle::Inner innerObj;
    innerObj.show();

    return 0;
}
