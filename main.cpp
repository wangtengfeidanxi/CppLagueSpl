#include <stdio.h>
#include "main.h"
#include "new.h"
#include "fn.h"
#include "class.h"
#include "classVirtul.h"
   int main()
{
    g();

    printf("sum is %d\n", addvalue(3, 2, 0));
//    printf("sum is %f\n", addvalues("%d,%d,%d", 3, 3,3));
    using namespace nm_sp_B;
   fn();
   nm_sp_A::fn();
   test_new();
   printf("begin show_mem_addr\n");
   show_mem_addr();
   shwoVirtulSture();
   return 0;
}
