#include "new.h"
#include<stdio.h>
#include"class.h"

void test_new(void)
{
  int *ip= new int;
  printf("new int : %d\n", *ip);
  int *ipin= new int(10);
  printf("new int(): %d\n", *ipin);
  int *ipary= new int[3];
  printf("new int[], [1] [2]: %d, %d\n", *(ipary+1), *ipary);
  delete ip;
  delete ipin;
  if(ipin)
 printf("after delete ipin is not null\n");
      delete[] ipary;
  printf("delete ipary over\n");
  if(ipary)
   printf("after delete ipary allways has content\n");
  base *pbase= new base;
  base *pbase2= new base();
  base *pbaseinit= new base(1);
  delete pbase;
   delete pbase2;
   delete pbaseinit;
   printf("new over\n");
 // base onebase; 
}
