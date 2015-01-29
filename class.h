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
public:
  virtual void who(){std::cout<<"i'm base"<<std::endl;}
//   static const int s= 3;
//   static const float f= 3.0;

private:
	base get(base& baseOne);
};
   class child: public base
{
	public:
		virtual void who(){std::cout<<"i'm child "<<std::endl;}
};
  class childB:public base
{
public:
	virtual void who(){std::cout<<"i'm childB"<<std::endl;}
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
 class tesCls
{
	public:
	int foverr() const {std::cout<<"foverr const"<<std::endl;}	
	void foverr(){std::cout<<"foverr"<<std::endl; 
}
};
 void show_mem_addr();
