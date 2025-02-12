#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::map<int, int> rbTree;
    std::unordered_map<int, int> hashTable;
    int n = 100000;

    for (int i = 0; i < n; i++) {
        rbTree[i] = i;
        hashTable[i] = i;
    }

    std::cout << "std::map size (RB Tree): " << sizeof(rbTree) << " bytes\n";
    std::cout << "std::unordered_map size (Hash Table): " << sizeof(hashTable) << " bytes\n";

    return 0;
}
