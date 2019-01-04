//Virtual Function
#include<iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout<<"This is Display() of Base class A";
    }
};
class B:public A
{
public:
    void display()
    {
        cout<<"Display method of derived class B";
    }
};
int main()
{
    B obj;
    A &bs=obj;    //pointer of object type
    obj.display();

}
