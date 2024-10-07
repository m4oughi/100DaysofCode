#include <iostream>
using namespace std;

class Comparable {
public:
    virtual bool isGreater(const Comparable& other) const = 0;
};

class Integer : public Comparable {
private:
    int value;
public:
    Integer(int v) : value(v) {}
    bool isGreater(const Comparable& other) const override {
        const Integer& otherInt = static_cast<const Integer&>(other);
        return this->value > otherInt.value;
    }
};

template<typename T>
void compare(const T& a, const T& b) {
    if (a.isGreater(b)) {
        cout << "The first object is greater." << endl;
    } else {
        cout << "The second object is greater or equal." << endl;
    }
}

int main() {
    Integer int1(5);
    Integer int2(10);

    compare(int1, int2);  // Template function with polymorphism

    return 0;
}
