#include <iostream>

template<typename T>
class MyTemplateClass {
public:
    void process() & {
        std::cout << "Processing l-value" << std::endl;
    }

    void process() && {
        std::cout << "Processing r-value" << std::endl;
    }
};

int main() {
    MyTemplateClass<int> obj;
    obj.process();  // Calls l-value version

    MyTemplateClass<int>().process();  // Calls r-value version
}
