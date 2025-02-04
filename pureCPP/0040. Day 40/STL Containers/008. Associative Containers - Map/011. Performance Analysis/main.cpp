#include <iostream>
#include <map>
#include <chrono>

int main() {
    std::map<int, int> m;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100000; ++i) {
        m[i] = i * i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Insertion Time: "
              << std::chrono::duration_cast<std::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
