#include <iostream>
#include <vector>

class Container {
    std::vector<int> data;
public:
    Container(const std::vector<int>& vec) : data(vec) {}

    void show() const {
        std::cout << "Container has " << data.size() << " elements" << std::endl;
    }
};

int main() {
    Container container(std::vector<int>{1, 2, 3, 4});  // Temporary std::vector

    container.show();

    return 0;
}
