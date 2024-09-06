#include <iostream>
#include <utility>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired\n";
    }
    ~Resource() {
        std::cout << "Resource destroyed\n";
    }
};

void takeOwnership(Resource &res) {
    std::cout << "Taking ownership\n";
}

int main() {
    Resource res;
    takeOwnership(std::move(res));  // std::move allows using a mutable reference for the move
}