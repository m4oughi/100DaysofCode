#include <iostream>

enum Status { OK = 1, Fail = -1 };

int main() {
    Status s = OK;
    std::cout << "Status: " << s << std::endl;
}
