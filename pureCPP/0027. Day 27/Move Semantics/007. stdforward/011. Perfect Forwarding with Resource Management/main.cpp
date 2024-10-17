#include <iostream>
#include <utility>

class Resource {
public:
    Resource() { std::cout << "Acquired resource" << std::endl; }
    ~Resource() { std::cout << "Released resource" << std::endl; }
};

template <typename T>
void manageResource(T&& res) {
    Resource localRes = std::forward<T>(res);  // Forward resource to localRes
    std::cout << "Managing resource" << std::endl;
}

int main() {
    Resource r;
    manageResource(r);           // Lvalue forwarded
    manageResource(Resource());  // Rvalue forwarded
}
