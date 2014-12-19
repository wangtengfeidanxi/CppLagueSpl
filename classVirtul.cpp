//classVirtul.cpp   to check class virtul funtion structure
#include "classVirtul.h"
   void shwoVirtulSture()
{
   typedef void(*Fun)(void);
   GrandChild gc;
   int** pVtbl = (int**)&gc;
   cout << "[0] GrandChild::_vptr->" << endl;
   for(int i=0; (Fun) pVtbl[0][i]!=NULL; i++){
      Fun pFun = (Fun) pVtbl[0][i];
       cout << "    ["<<i<<"] ";
       pFun();
   }
   cout << "[1] Parent.nParent = " << (int)pVtbl[1] << endl;
   cout << "[2] Child.nChild = " << (int) pVtbl[2] << endl;
   cout << "[3] GrandChild.nGrandchild = " << (int) pVtbl[3] << endl;
}
