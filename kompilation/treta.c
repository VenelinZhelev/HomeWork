#include "transformation.h"
#include <stdio.h>

int main() {
    const char* validInput = "-123";
    const char* invalidInput = "12ab23";

    transformation resultValid = transformStringToNumber(validInput);
    transformation resultInvalid = transformStringToNumber(invalidInput);

    printf("Valid Input: %ld, Error: %s\n", resultValid.result, resultValid.error);
    printf("Invalid Input: %ld, Error: %s\n", resultInvalid.result, resultInvalid.error);

    return 0;
}
