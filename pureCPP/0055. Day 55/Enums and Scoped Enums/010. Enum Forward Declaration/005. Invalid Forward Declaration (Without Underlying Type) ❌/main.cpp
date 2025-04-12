// ❌ Error: Must specify underlying type
// enum class Mode;  // ILLEGAL in C++

enum class Mode : unsigned int;  // ✅ Correct way
