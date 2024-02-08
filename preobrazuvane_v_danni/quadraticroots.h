#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H
struct QuadraticRootsResult{
int x1;
int x2;
int norealroots;
};

struct QuadraticRootsResult findroots(long double a, long double b, long double c);


#endif
