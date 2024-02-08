#include "transformation.h"
#include <stdlib.h>
#include <stdio.h>

transformation transformStringToNumber(const char* input) {
    transformation result;
    char* endptr;

    result.result = strtol(input, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0;
        snprintf(result.error, 100, "Invalid input string");
    } else {
        result.error[0] = '\0'; 
    }

    return result;
}

