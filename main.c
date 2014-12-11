#include <stdio.h>

#include <stdarg.h>

#include <iostream>
#include "main.h"
   int main()
{
    g();

    printf("sum is %d\n", addvalue(3, 2, 0));
//    printf("sum is %f\n", addvalues("%d,%d,%d", 3, 3,3));
    f(6);
    nm_sp_A::f(2);
    using namespace nm_sp_B;
   fn();
   nm_sp_A::fn();
   return 0;
}
