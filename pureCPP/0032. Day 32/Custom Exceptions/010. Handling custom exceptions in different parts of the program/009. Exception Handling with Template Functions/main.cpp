#include <iostream>
#include <exception>

class TemplateException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Template Exception occurred!";
    }
};

template<typename T>
void process(T value) {
    if (value < 0) {
        throw TemplateException();
    }
}

int main() {
    try {
        process(-5);
    } catch (const TemplateException& e) {
        std::cout << "Caught template exception: " << e.what() << std::endl;
    }

    return 0;
}
