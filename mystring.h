//mystring.h   chapter 11

   class mystring
{
     struct Data;       //content
     Data *pData;
   public:
     class Cref;        //reference char
     class Range{};    //exception
   
   public:
     mystring();
     mystring(const char*);
     mystring(const mystring&);
     mystring& operator=(const char*);
     mystring& operator= (const mystring&);
     ~mystring();

};
