#include <iostream>
#include <fstream>
#include <vector>

class FilePool {
    std::vector<std::ofstream> files;
public:
    void addFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            std::cout << "File added to pool: " << filename << std::endl;
            files.push_back(std::move(file));
        }
    }

    void writeToFile(size_t index, const std::string& message) {
        if (index < files.size() && files[index].is_open()) {
            files[index] << message << std::endl;
        }
    }

    ~FilePool() {
        for (auto& file : files) {
            if (file.is_open()) {
                file.close();
                std::cout << "File in pool closed." << std::endl;
            }
        }
    }
};

int main() {
    {
        FilePool pool;
        pool.addFile("pool_log1.txt");
        pool.addFile("pool_log2.txt");
        pool.writeToFile(0, "Message for log 1.");
        pool.writeToFile(1, "Message for log 2.");
        // Files will be closed when pool goes out of scope.
    }
    std::cout << "All files in pool have been closed." << std::endl;
}
