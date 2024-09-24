#include <iostream>
#include <vector>
#include <algorithm>

class MyClass {
public:
    std::vector<int> data = {1, 2, 3, 4, 5};

    void modifyData() {
        int threshold = 3;
        std::for_each(data.begin(), data.end(), [this, threshold](int& n) {
            if (n > threshold) {
                n = n * factor;
            }
        });
    }

    void printData() {
        for (int n : data) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }

private:
    int factor = 2;
};

int main() {
    MyClass obj;
    obj.modifyData();
    obj.printData(); // Outputs: 1 2 3 8 10
    return 0;
}
