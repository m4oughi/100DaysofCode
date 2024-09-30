#include <iostream>
using namespace std;

class Outer {
private:
    int outerVar;

protected:
    int protectedVar;

public:
    Outer(int val) : outerVar(val), protectedVar(val + 1) {}

    class Inner {
    private:
        int innerVar;
    public:
        Inner(int val) : innerVar(val) {}

        void display(const Outer &o) {
            cout << "Inner class accessing Outer class private variable: " << o.outerVar << endl;
            cout << "Inner class accessing Outer class protected variable: " << o.protectedVar << endl;
            cout << "Inner class private variable: " << innerVar << endl;
        }
    };
};

int main() {
    Outer outerObj(100);
    Outer::Inner innerObj(200);
    innerObj.display(outerObj);

    return 0;
}
