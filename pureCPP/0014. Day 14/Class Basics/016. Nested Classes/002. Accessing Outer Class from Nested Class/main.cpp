#include <iostream>
using namespace std;

class Outer {
    int outerVar;
public:
    Outer(int val) : outerVar(val) {}

    class Inner {
    public:
        void showOuterVar(const Outer &o) {
            cout << "Outer class variable: " << o.outerVar << endl;
        }
    };
};

int main() {
    Outer outerObj(42);
    Outer::Inner innerObj;
    innerObj.showOuterVar(outerObj);

    return 0;
}
