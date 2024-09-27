#define VERSION 1

#if VERSION == 1
const char* version = "Version 1";
#endif

int main() {
    printf("Running %s\n", version);
    return 0;
}
