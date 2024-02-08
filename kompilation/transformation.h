#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

typedef struct {
    long int result;
    char error[100];
} transformation;

transformation transformStringToNumber(const char* input);

#endif