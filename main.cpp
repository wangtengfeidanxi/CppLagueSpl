#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include "main.h"
#include "new.h"
void f(int)
{
  std::cout<< "f(int)"<< std::endl;
}

void g()
{
//  void f(double)
//  {
//    std::cout<< "f(double)"<< std::endl;
//  }
  f(1);
}
int addvalue(int value, ...)

{

  va_list argument_ptr;
   int result = 0;
 if(value!=0)
 {
     result +=value;
  
    va_start(argument_ptr, value);
    while ((value = va_arg(argument_ptr, int)) != 0)
   {
     result += value;
   }
    va_end(argument_ptr);
 }
 return result;

}

double addvalues(char* str, ...)
{
 va_list marker;
 double result = 0.0;
 va_start(marker, str);
 while(*str)
 {
  if(*str == '%')
  {
   switch(*(++str))
   {
   case 'd':result += va_arg(marker, int);
    break;
   case 'f':result += va_arg(marker, double);
    break;
   }
  }
  str ++;
 }
 va_end(marker);
 return(result);
}
 namespace nm_sp_A{
   int s;
   void fn_A(){std::cout << "fn_A" << std::endl;}
   void fn(){std::cout << "fn in spA" << std::endl;}
}
 namespace nm_sp_B{
   int s_b;
   void fn_B(){std::cout << "fn_B" << std::endl;}
   void fn(){std::cout << "fn in spB" << std::endl;}
}
   int main()
{
    g();

    printf("sum is %d\n", addvalue(3, 2, 0));
//    printf("sum is %f\n", addvalues("%d,%d,%d", 3, 3,3));
    using namespace nm_sp_B;
   fn();
   nm_sp_A::fn();
   test_new();
   return 0;
}
