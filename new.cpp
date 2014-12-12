#include "new.h"
#include<stdio.h>
#include"class.h"

void test_new(void)
{
  int *ip= new int;
  int *ipin= new int(10);
  int *ipary= new int[3];
  base *pbase= new base;
  base *pbase2= new base();
  base *pbaseinit= new base(1);
  printf("new int : %d\n", *ip);
  printf("new int(): %d\n", *ipin);
  printf("new int[], [1] [2]: %d, %d\n", *(ipary+1), *ipary);
  delete ip;
  delete ipin;
  if(ipin)
    printf("after delete ipin is not null\n");
  delete[] ipary;
  printf("delete ipary over\n");
  if(ipary)
   printf("after delete ipary allways has content\n");
   delete pbase;
   delete pbase2;
   delete pbaseinit;
 // base onebase; 
}
