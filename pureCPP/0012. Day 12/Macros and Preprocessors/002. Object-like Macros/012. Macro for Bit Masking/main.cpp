#define FLAG_READ  0x01 // 0001
#define FLAG_WRITE 0x02 // 0010
#define FLAG_EXEC  0x04 // 0100

int main() {
    int permissions = FLAG_READ | FLAG_WRITE;
    return 0;
}
