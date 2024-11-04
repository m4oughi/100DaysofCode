#include <iostream>
#include <exception>

class ClassAException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception in Class A!";
    }
};

class ClassA {
public:
    void throwException() {
        throw ClassAException();
    }
};

class ClassB {
public:
    void handleException(ClassA& obj) {
        try {
            obj.throwException();
        } catch (const ClassAException& e) {
            std::cout << "Caught in Class B: " << e.what() << std::endl;
        }
    }
};

int main() {
    ClassA a;
    ClassB b;
    b.handleException(a);
    return 0;
}
