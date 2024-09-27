#define OS "Windows"

#if defined(OS) && OS == "Windows"
void operatingSystem() {
    printf("Running on Windows.\n");
}
#elif defined(OS) && OS == "Linux"
void operatingSystem() {
    printf("Running on Linux.\n");
}
#else
void operatingSystem() {
    printf("Operating system unknown.\n");
}
#endif

int main() {
    operatingSystem();
    return 0;
}
