//classVirtul.h   to check class virtul funtion structure
#include <iostream>
using namespace std;
class Parent {
public:
    Parent():nParent(888) {}
    virtual void sayhello() { cout << "Perent()::sayhello()" << endl; }
    virtual void walk() { cout << "Parent::walk()" << endl; }
    virtual void sleep() { cout << "Parent::sleep()" << endl; }
protected:
   int nParent;
};
 
class Child : public Parent {
public:
    Child():nChild(88) {}
    virtual void sayhello() { cout << "Child::sayhello()" << endl; }
    virtual void  walk_child() { cout << "Child::walk_child()" << endl; }
    virtual void  sleep_child() { cout << "Child::sleep_child()" << endl; }
protected:
   int nChild;
};
 
class GrandChild : public Child{
public:
    GrandChild():nGrandchild(8) {}
    virtual void  sayhello() { cout << "GrandChild::sayhello()" << endl; }
    virtual void walk_child() { cout << "GrandChild::walk_child()" << endl; }
    virtual void sleep_grandchild() { cout << "GrandChild::sleep_grandchild()" << endl; }
protected:
   int nGrandchild;
};
   void showVirtulSture();
