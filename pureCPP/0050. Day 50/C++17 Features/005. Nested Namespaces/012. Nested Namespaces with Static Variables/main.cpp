#include <iostream>

namespace Storage::Cache {
    static int data = 42;
}

int main() {
    std::cout << "Cached Data: " << Storage::Cache::data << '\n';
    return 0;
}
