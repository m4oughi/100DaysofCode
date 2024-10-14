#include <iostream>
#include <unistd.h>
#include <fcntl.h>

class FileDescriptor {
    int fd;
public:
    FileDescriptor(const char* path) {
        fd = open(path, O_RDONLY);
        if (fd == -1) {
            std::cerr << "Failed to open file descriptor." << std::endl;
        } else {
            std::cout << "File descriptor opened." << std::endl;
        }
    }

    ~FileDescriptor() {
        if (fd != -1) {
            close(fd);
            std::cout << "File descriptor closed." << std::endl;
        }
    }

    void readFile() {
        if (fd != -1) {
            char buffer[128];
            ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
            if (bytesRead > 0) {
                std::cout << "Read " << bytesRead << " bytes from file." << std::endl;
            }
        }
    }
};

int main() {
    {
        FileDescriptor fd("/path/to/file");
        fd.readFile();
    }
    // File descriptor is automatically closed when fd goes out of scope
    return 0;
}
