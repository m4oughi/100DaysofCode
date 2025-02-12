#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::map<int, int> treeMap;
    std::unordered_map<int, int> hashMap;

    for (int i = 0; i < 1000000; i++) {
        treeMap[i] = i;
        hashMap[i] = i;
    }

    std::cout << "Size of std::map: " << sizeof(treeMap) << " bytes\n";
    std::cout << "Size of std::unordered_map: " << sizeof(hashMap) << " bytes\n";

    return 0;
}
