#include <iostream>

class Resource {
public:
    Resource(const std::string& name) : name(name) {
        std::cout << "Acquiring resource: " << name << std::endl;
    }

    ~Resource() {
        std::cout << "Releasing resource: " << name << std::endl;
    }

private:
    std::string name;
};

int main() {
    std::cout << "Entering main block" << std::endl;
    Resource res1("Resource1");

    {
        std::cout << "Entering inner block" << std::endl;
        Resource res2("Resource2");
        Resource res3("Resource3");
        std::cout << "Leaving inner block" << std::endl;
    }

    std::cout << "Leaving main block" << std::endl;
    return 0;
}
