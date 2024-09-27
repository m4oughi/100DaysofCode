#undef FEATURE_FLAG // FEATURE_FLAG is not defined

#if !defined(FEATURE_FLAG)
const char* featureStatus = "Feature is disabled";
#else
const char* featureStatus = "Feature is enabled";
#endif

int main() {
    printf("%s\n", featureStatus);
    return 0;
}
s