#include <iostream>
   class base
{
public:
   base():cstiChor(0){};
   base(int n); 
    friend void show_mem_addr();
private:
   char cCharBeforeChar;
   char cCharBeforeInt;
   double dDouble;
   int iCharactor;
   char cCharAfterInt;
   char cChar4;
   double dDouble2; 
   char cChar5;
   double dDouble3;
  const  int cstiChor;
//   static const int s= 3;
//   static const float f= 3.0;

private:
	base get(base& baseOne);
};
//memtest to test class mem structure
class memtest

{
public:
    memtest(int _a, double _b) : a(_a), b(_b) {}
    inline void print_addr(){
        std::cout<<"Address of a and b is:"<<&a<<", " <<&b<<std::endl;
    }
    inline void print_sta_mem(){
        std::cout<<"Address of static member c is:"<<&c<<std::endl;
    }
  private:
    int a;
    double b;
    static int c;
};
 void show_mem_addr();
