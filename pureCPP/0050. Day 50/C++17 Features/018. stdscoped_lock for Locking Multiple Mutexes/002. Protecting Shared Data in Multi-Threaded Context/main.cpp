#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mtxA, mtxB;
int sharedResourceA = 0, sharedResourceB = 0;

void modifyResources() {
    std::scoped_lock lock(mtxA, mtxB);
    ++sharedResourceA;
    ++sharedResourceB;
    std::cout << "Updated Resources: A=" << sharedResourceA << ", B=" << sharedResourceB << '\n';
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 5; ++i)
        threads.emplace_back(modifyResources);

    for (auto& t : threads)
        t.join();

    return 0;
}
