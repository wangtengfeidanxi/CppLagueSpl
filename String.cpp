//String.cpp chapter 11

struct String::Srep{
  char  *s;      //元素指针
  int   sz;      //字符个数
  int   n;       //引用计数
  Srep(int nsz, const char*p)
 {
    n=1;
    sz=nsz;
    s= new char[sz+1];
    strcpy(s,p);
 }
 ~Srep(){delete[] s;}
   Srep* get_own_copy()    //clone
  {
     if(n==1) 
        return this;
      n--;
         return new Srep(sz, s);
  }
  void assign(int nsz, const chapter* p)
  {
     if(sz!= nsz){
        delete[] s;
        s= new char[sz+1];
     }
     strcpy(s,p);
   }
  private:
   Srep(const Srep&);
   Srep& operator= (const Srep&);
};
  String::String()
{ 
   rep= new Srep(0, "");
}
  String::String(const String& x)
{
    x.rep->n++;
    rep= x.rep;
}
   String::~String()
{
   if(--rep->n == 0) delete rep;
}
  
