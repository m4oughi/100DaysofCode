#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms1 = {10, 20, 30};
    std::multiset<int> ms2 = {20, 30, 40};

    ms1.insert(ms2.begin(), ms2.end());

    for (int i : ms1) {
        std::cout << i << " ";
    }

    return 0;
}
