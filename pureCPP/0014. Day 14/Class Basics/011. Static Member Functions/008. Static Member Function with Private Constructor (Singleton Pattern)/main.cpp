#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    int value;

    // Private constructor
    Singleton(int v) : value(v) {}

public:
    static Singleton* getInstance(int v) {
        if (instance == nullptr) {
            instance = new Singleton(v);
        }
        return instance;
    }

    int getValue() {
        return value;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance(100);
    cout << "Value: " << s1->getValue() << endl;

    Singleton* s2 = Singleton::getInstance(200);
    cout << "Value: " << s2->getValue() << endl;  // Singleton returns the same instance

    return 0;
}
