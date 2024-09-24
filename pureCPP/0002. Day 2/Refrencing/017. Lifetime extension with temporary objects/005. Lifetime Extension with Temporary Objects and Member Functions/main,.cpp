#include <iostream>
#include <vector>

class MyClass {
public:
    void process(const std::vector<int>& vec) const {
        std::cout << "Processing vector with size: " << vec.size() << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.process(std::vector<int>{10, 20, 30});  // Temporary std::vector

    return 0;
}
