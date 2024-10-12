#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // Static pointer to instance
    Singleton() {}  // Private constructor to prevent multiple instances

public:
    static Singleton* getInstance() {  // Static method to get the singleton instance
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        cout << "Singleton instance accessed!" << endl;
    }
};

// Initialize static instance pointer
Singleton* Singleton::instance = nullptr;

int main() {
    // Access the Singleton instance via the static method
    Singleton* s = Singleton::getInstance();
    s->showMessage();  // Output: Singleton instance accessed!

    return 0;
}
