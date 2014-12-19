//String.h chapter 11
class String{
  struct Srep;          //表示
  Srep   *rep;

public:
  class Cref;           //引用char
  class Range{};        //用于异常
  String();
  String(const char*);
  String(const String&);
  String& operator= (const char*);
  String& operator= (const String&);
  ~String();
 }
