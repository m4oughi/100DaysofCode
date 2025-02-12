#include <iostream>
#include <map>

int expensiveComputation() {
    std::cout << "Performing expensive operation...\n";
    return 42;
}

int main() {
    std::map<int, int> data = {{1, 100}, {2, 200}, {3, 300}};

    int key = 4;
    if (!data.count(key)) {
        data[key] = expensiveComputation();
    }

    std::cout << "Value at key " << key << ": " << data[key] << "\n";
    return 0;
}
