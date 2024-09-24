#include <iostream>

int& getAlias(int &ref) {
    return ref;  // Return a reference to the passed variable
}

int main() {
    int a = 300;
    int &aliasA = getAlias(a);  // aliasA refers to a
    int &aliasB = getAlias(a);  // aliasB also refers to a

    aliasA = 400;  // Modify a through aliasA
    std::cout << aliasB << std::endl;  // Output: 400 (aliasB reflects the change)

    return 0;
}