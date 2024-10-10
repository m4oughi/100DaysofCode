#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int v) : baseValue(v) {}

    // Friend class Middle
    friend class Middle;
};

class Middle : public Base {
private:
    int middleValue;

public:
    Middle(int baseVal, int middleVal) : Base(baseVal), middleValue(middleVal) {}

    // Friend class Child
    friend class Child;
};

class Child : public Middle {
public:
    Child(int baseVal, int middleVal) : Middle(baseVal, middleVal) {}

    void showMiddleValue(Middle& m) {
        cout << "Middle's value: " << m.middleValue << endl;  // Can access Middle
    }

    void tryToAccessBase(Base& b) {
        // cout << "Base's value: " << b.baseValue << endl;  // Error: Child is not a friend of Base
    }
};

int main() {
    Base objBase(100);
    Middle objMiddle(200, 300);
    Child objChild(100, 300);

    objChild.showMiddleValue(objMiddle);  // Works: Child is a friend of Middle
    // objChild.tryToAccessBase(objBase);  // Error: Child is not a friend of Base

    return 0;
}
