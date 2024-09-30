#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    int data;

    // Private constructor
    Singleton() : data(0) {}

public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    int getData() {
        return data;
    }

    void setData(int value) {
        data = value;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->setData(100);
    
    Singleton* s2 = Singleton::getInstance();
    cout << "Data in Singleton: " << s2->getData() << endl;

    return 0;
}
