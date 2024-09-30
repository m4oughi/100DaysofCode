#include <iostream>
using namespace std;

class Outer {
private:
    int outerVar;
public:
    Outer(int val) : outerVar(val) {}

    class Inner {
    public:
        void showOuter(const Outer &o);
    };

    friend void Inner::showOuter(const Outer &o);
};

void Outer::Inner::showOuter(const Outer &o) {
    cout << "Outer class variable: " << o.outerVar << endl;
}

int main() {
    Outer outerObj(99);
    Outer::Inner innerObj;
    innerObj.showOuter(outerObj);

    return 0;
}
