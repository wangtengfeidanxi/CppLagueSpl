//mystring.cpp  chapter 11
#include<string.h>
#include"mystring.h" 
 struct mystring::Data
{
    char *s;
    int   sz;
    int   n;

   Data(int nsz, const char *p)
    {
   	 n=1;
   	 sz= nsz;
   	 s= new char[sz+ 1];
         strcpy(s, p);
    }
    
    ~Data(){delete[] s;}

    Data* get_own_copy()
    {  
      if(n==1) return this;
       n--;
       return new Data(sz, s);
    }
    
    void assign(int nsz, const char *p)
    {
      if(sz!= nsz)
      {
         delete[] s;
         sz= nsz;
         s= new char[sz+1];
      }
      strcpy(s, p);
    }
   
   private:
     Data(const Data&);
     Data& operator= (const Data&);
};
     mystring::mystring()
     {
        pData= new Data(0, "");
     }

     mystring::mystring(const mystring& x)
     {
         x.pData->n++;
         pData= x.pData;
     }
       
     mystring::~mystring()
     {
         if(--pData->n == 0)
           delete pData;
     }
     
     mystring& mystring::operator=(const mystring& x)
     {
	x.pData->n++;
        if(--pData->n==0) delete pData;
    	pData= x.pData;
	return *this;
     }
     
     mystring::mystring(const char *s)
     {
        pData= new Data(strlen(s), s);
     }
    
     mystring& mystring::operator= (const char *s)
     {
 	if(pData->n== 1)
	   pData->assign(strlen(s), s);
	else{
	   pData->n--;
	   pData= new Data(strlen(s), s);
    	 }
  	return *this;
      } 
