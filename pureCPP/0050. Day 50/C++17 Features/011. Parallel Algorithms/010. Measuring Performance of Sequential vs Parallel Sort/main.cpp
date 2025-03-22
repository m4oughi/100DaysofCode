#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <chrono>

int main() {
    std::vector<int> data(1000000);
    std::generate(data.begin(), data.end(), std::rand);

    std::vector<int> data_seq = data;
    std::vector<int> data_par = data;

    auto start_seq = std::chrono::high_resolution_clock::now();
    std::sort(std::execution::seq, data_seq.begin(), data_seq.end());
    auto end_seq = std::chrono::high_resolution_clock::now();

    auto start_par = std::chrono::high_resolution_clock::now();
    std::sort(std::execution::par, data_par.begin(), data_par.end());
    auto end_par = std::chrono::high_resolution_clock::now();

    std::cout << "Sequential sort time: "
              << std::chrono::duration<double>(end_seq - start_seq).count()
              << " seconds\n";
    std::cout << "Parallel sort time: "
              << std::chrono::duration<double>(end_par - start_par).count()
              << " seconds\n";

    return 0;
}
