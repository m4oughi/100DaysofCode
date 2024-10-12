#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // Static member holding a single instance of the class

    // Private constructor to prevent external instantiation
    Singleton() {}

public:
    // Static method to access the single instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        cout << "Singleton instance accessed!" << endl;
    }
};

// Initialize static member outside the class
Singleton* Singleton::instance = nullptr;

int main() {
    // Access Singleton instance via static method
    Singleton* s = Singleton::getInstance();
    s->showMessage();  // Output: Singleton instance accessed!

    return 0;
}
