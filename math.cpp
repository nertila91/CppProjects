#include "math.h"

int add(int a, int b)
{
    return a+b;
}

int prod(int a, int b)
{
    return a*b;
}

int diff(int a, int b){
    return a-b;
}

int division(int a, int b){
    if(b==0)
        return 0;
    return a/b;
}
