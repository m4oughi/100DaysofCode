#pragma warning(push)
#pragma warning(disable: 4996) // Disable a specific warning

int main() {
    char buffer[100];
    gets(buffer); // Normally generates a warning in MSVC, but it's disabled
    #pragma warning(pop)
    return 0;
}
