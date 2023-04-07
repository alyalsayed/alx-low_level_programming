#include <stddef.h> // for size_t
#include <stdint.h> // for uint32_t
#include <string.h> // for strlen

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }
    size_t len = strlen(b);
    uint32_t result = 0;
    for (size_t i = 0; i < len; i++) {
        if (b[i] == '0') {
            result <<= 1;
        } else if (b[i] == '1') {
            result = (result << 1) | 1;
        } else {
            return 0;
        }
    }
    return result;
}