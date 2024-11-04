#include <iostream>
#include <exception>

class ErrorBase : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "Base Error";
    }
};

class IOError : public ErrorBase {
public:
    const char* what() const noexcept override {
        return "I/O Error";
    }
};

class MemoryError : public ErrorBase {
public:
    const char* what() const noexcept override {
        return "Memory Error";
    }
};

void throwError(ErrorBase* error) {
    throw error;
}

int main() {
    try {
        throwError(new IOError());
    } catch (ErrorBase* e) {
        std::cout << "Caught polymorphic: " << e->what() << std::endl;
        delete e;  // Clean up dynamically allocated exception object
    }
    return 0;
}
