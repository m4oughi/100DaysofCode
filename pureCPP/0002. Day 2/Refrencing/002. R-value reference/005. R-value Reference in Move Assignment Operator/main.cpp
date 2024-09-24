#include <iostream>

class Resource {
public:
    // Move assignment operator
    Resource& operator=(Resource &&other) {
        if (this != &other) {
            std::cout << "Resource moved via assignment" << std::endl;
        }
        return *this;
    }
};

int main() {
    Resource res1;
    Resource res2;
    res2 = std::move(res1);  // Move assignment operator is called

    return 0;
}