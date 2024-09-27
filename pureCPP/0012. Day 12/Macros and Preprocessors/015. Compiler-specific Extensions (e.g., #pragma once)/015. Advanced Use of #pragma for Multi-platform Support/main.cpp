#ifdef _MSC_VER
#pragma comment(lib, "msvc_specific_lib.lib") // Link MSVC-specific library
#elif defined(__GNUC__)
#pragma GCC visibility push(default) // Set default visibility for symbols in GCC
#endif

int main() {
    return 0;
}
