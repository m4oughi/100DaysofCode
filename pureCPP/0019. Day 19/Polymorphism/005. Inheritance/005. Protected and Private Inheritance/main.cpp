#include <iostream>
using namespace std;

class Base {
protected:
    int protectedVar;
private:
    int privateVar;
public:
    Base() : protectedVar(10), privateVar(20) {}
};

class DerivedProtected : protected Base {
public:
    void accessBaseMembers() {
        cout << "Protected var: " << protectedVar << endl;
        // cout << "Private var: " << privateVar << endl;  // Error: privateVar is not accessible
    }
};

class DerivedPrivate : private Base {
public:
    void accessBaseMembers() {
        cout << "Protected var: " << protectedVar << endl;
        // cout << "Private var: " << privateVar << endl;  // Error: privateVar is not accessible
    }
};

int main() {
    DerivedProtected dp;
    DerivedPrivate dpr;
    dp.accessBaseMembers();
    dpr.accessBaseMembers();
    return 0;
}
