
#ifndef maths
#define maths

int factoriel(int a)
{
    if (a == 0 || a == 1) {
        return 1;
    } else {
        return a * factoriel(a - 1);
    }
}

#endif