#include "safeint.h"
#include "util.h"

SafeResult safeadd(int a, int b) {
    SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a > 0) {
        if (b > 0 && a > INT_MAX / b) {
            result.errorflag = 1;
        } else if (b < 0 && b < INT_MIN / a) {
            result.errorflag = 1;
        } else {
            result.value = a * b;
            result.errorflag = 0;
        }
    } else {
        if (b > 0 && a < INT_MIN / b) {
            result.errorflag = 1;
        } else if (b < 0 && a == INT_MIN && b == -1) {
            result.errorflag = 1;
        } else if (b < 0 && b < INT_MAX / a) {
            result.errorflag = 1;
        } else {
            result.value = a * b;
            result.errorflag = 0;
        }
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0) {
        result.errorflag = 1; // Division by zero
    } else if (a == INT_MIN && b == -1) {
        result.errorflag = 1; // Overflow
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    int value = 0;
    SafeResult result;
    if (str == NULL) {
        result.errorflag = 1; // Null pointer
        return result;
    }

    int sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        SafeResult temp = safemultiply(value, 10);
        if (temp.errorflag) {
            result.errorflag = 1; // Overflow during multiplication
            return result;
        }
        value = temp.value;

        int digit = *str - '0';
        SafeResult temp2 = safeadd(value, sign * digit);
        if (temp2.errorflag) {
            result.errorflag = 1; // Overflow during addition
            return result;
        }
        value = temp2.value;

        str++;
    }

    result.value = sign * value;
    result.errorflag = 0;
    return result;
}
