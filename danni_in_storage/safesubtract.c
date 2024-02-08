#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }

    SafeResult result = safesubtract(safestrtoint(argv[1]).value, safestrtoint(argv[2]).value);

    if (result.errorflag) {
        print_error("Overflow or underflow occurred.");
    }

    printf("Difference: %d\n", result.value);

    return 0;
}
