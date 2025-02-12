#include <iostream>
#include <map>
#include <cmath>

int getHeight(int n) {
    return std::ceil(std::log2(n + 1)); // Approximate height of balanced binary tree
}

int main() {
    std::map<int, int> rbTree;
    int n = 1000; 

    for (int i = 1; i <= n; i++) {
        rbTree[i] = i * 10;
    }

    std::cout << "Approximate height of Red-Black Tree for " << n << " nodes: " << getHeight(n) << "\n";
    return 0;
}
