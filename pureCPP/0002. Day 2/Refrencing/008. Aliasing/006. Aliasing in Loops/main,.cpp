#include <iostream>

int main() {
    int values[] = {1, 2, 3};

    for (int i = 0; i < 2; ++i) {
        int &alias = values[i];
        alias = 100;  // Modify the elements through alias
    }

    std::cout << values[0] << " " << values[1] << std::endl;  // Output: 100 100

    return 0;
}