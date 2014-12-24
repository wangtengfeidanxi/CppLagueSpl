#include "class.h"
#include <typeinfo>
  base::base(int n):cstiChor(n){}
 
//  base baseA(2);
//  const int base::s ;
//  const int *p= &baseA.s; 
//  const float base::f ;
//  const float *pf= &baseA.f;
   
//memtest fn

  int memtest::c= 0;

 void show_mem_addr()
{

     std::cout<<"shwomemaddr"<<std::endl;
    base base1(2);
    int sizebase= sizeof(base1);
    std::cout<<"base1:"<<&base1<<", cCharBeforeChar: "<<(int*)&base1.cCharBeforeChar<<", cCharBeforeInt: "<<(int*)&base1.cCharBeforeInt<<", dDouble:"<<(int*)&base1.dDouble<<", iCharactor: "<<&base1.iCharactor<<", cCharAfterInt: "<<(int*)&base1.cCharAfterInt<<", cChar4:"<<(int*)&base1.cChar4<<", dDouble2:"<<(int*)&base1.dDouble2<<", cChar5:"<<(int*)&base1.cChar5<<", dDouble3:"<<(int*)&base1.dDouble3<<", cstiChor: "<<&base1.cstiChor<<std::endl;
    std::cout<<"size base: "<<sizebase<<std::endl;
    int sizememtest= sizeof(memtest);
    std::cout<<"sizeof memtest: "<<sizememtest<<std::endl;
    memtest m(1,1.0);
    std::cout<<"Address of m is : "<< &m<<std::endl;
    m.print_addr();
    m.print_sta_mem();
//    std::cout<<"fn adds is: "<<static_cast<int>(&memtest::print_addr)<<std::endl;
    std::cout<<"base typeinfo: "<<typeid(base1).name()<<std::endl;
    std::cout<<"memtest typeinfo: "<<typeid(m).name()<<std::endl;
}
