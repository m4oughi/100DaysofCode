#include <iostream>
#include <vector>
#include <thread>

void multiplyRowByMatrix(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, std::vector<std::vector<int>>& result, int row) {
    int n = B[0].size();
    for (int j = 0; j < n; ++j) {
        result[row][j] = 0;
        for (int k = 0; k < A[0].size(); ++k) {
            result[row][j] += A[row][k] * B[k][j];
        }
    }
}

int main() {
    unsigned int numThreads = std::thread::hardware_concurrency();
    int matrixSize = 4; // Example 4x4 matrices
    std::vector<std::vector<int>> A(matrixSize, std::vector<int>(matrixSize, 1));
    std::vector<std::vector<int>> B(matrixSize, std::vector<int>(matrixSize, 2));
    std::vector<std::vector<int>> result(matrixSize, std::vector<int>(matrixSize, 0));

    std::vector<std::thread> threads;
    for (int i = 0; i < matrixSize; ++i) {
        if (threads.size() < numThreads) {
            threads.emplace_back(multiplyRowByMatrix, std::cref(A), std::cref(B), std::ref(result), i);
        } else {
            threads[i % numThreads].join();
            threads[i % numThreads] = std::thread(multiplyRowByMatrix, std::cref(A), std::cref(B), std::ref(result), i);
        }
    }

    for (auto& t : threads) {
        if (t.joinable()) t.join();
    }

    // Print result matrix
    std::cout << "Result Matrix:" << std::endl;
    for (const auto& row : result) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
