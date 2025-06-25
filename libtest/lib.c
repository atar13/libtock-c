#include "lib.h"

int glob = 42;

int lib_func(int x)
{
    return x + glob;
}
