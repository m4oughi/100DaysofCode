#include <iostream>

class CustomContainer {
private:
    int data[3] = {10, 20, 30};

public:
    int* begin() { return data; }
    int* end() { return data + 3; }

    friend class IteratorHelper;
};

int main() {
    CustomContainer cc;

    for (int value : cc) { // ✅ Works now
        std::cout << value << " ";
    }

    return 0;
}
