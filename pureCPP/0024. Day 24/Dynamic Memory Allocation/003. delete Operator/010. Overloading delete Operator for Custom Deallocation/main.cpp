#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {
public:
    static void* operator new(size_t size) {
        cout << "Custom new operator called. Size: " << size << endl;
        return malloc(size); // allocate memory using malloc
    }

    static void operator delete(void* ptr) {
        cout << "Custom delete operator called." << endl;
        free(ptr); // deallocate memory using free
    }

    MyClass() {
        cout << "Constructor called." << endl;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    MyClass* obj = new MyClass; // custom new operator will be called

    delete obj; // custom delete operator will be called

    return 0;
}
