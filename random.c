
#include <stdlib.h>
#include <time.h>
#include <stddef.h>  // for size_t

// Fill `out` with random characters of length-1 and add '\0' at the end
void rand_string(char *out, size_t length) {
    static const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    if (length == 0) return;

    for (size_t i = 0; i + 1 < length; i++) {
        int key = rand() % (sizeof charset - 1);
        out[i] = charset[key];
    }
    out[length - 1] = '\0';
}
