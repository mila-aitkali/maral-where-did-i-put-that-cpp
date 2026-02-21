#include "where.hpp"

// Overload 1: find a character in a C-style string
int find(const char* s, char target) {
    if (s == nullptr) return -1;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == target) {
            return i;
        }
    }
    return -1;
}

// Overload 2: find a substring in a C-style string
int find(const char* s, const char* sub) {
    if (s == nullptr || sub == nullptr) return -1;

    // Empty substring is found at the beginning by convention
    if (sub[0] == '\0') return 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        int j = 0;

        // Try to match sub starting at s[i]
        while (sub[j] != '\0' && s[i + j] != '\0' && s[i + j] == sub[j]) {
            ++j;
        }

        // If we reached end of sub, we matched the whole substring
        if (sub[j] == '\0') {
            return i;
        }
    }

    return -1;
}