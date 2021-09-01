//6-13访问对象的公有成员函数的不同方式
#include <iostream>
using namespace std;

class point
{
    public:
        point(int xx=0,int yy=0):x(xx),y(yy){}
        int getx() const {return x;}//调用常函数的对象，会被视为常对象，不能改变成员数据
        int gety() const {return y;}
    private:
        int x,y;

};
int main()
{
    //通过对象名、对象的指针和函数成员的指针对对象 的公有成员函数 getX 进行访问，
    point a(4,5);//一个point对象a
    point *ptr=&a;//指向point对象的指针ptr
    int (point::*funptr)() const =&point::getx;//指向point成员函数getx的指针
    cout<<(a.*funptr)()<<endl;//通过对象的成员函数的指针访问getx
    cout<<(ptr->*funptr)()<<endl;//通过指向的对象的指针，再通过指向成员函数的指针访问getx
    cout<<a.getx()<<endl;//通过对象名访问getx
    cout<<ptr->getx()<<endl;//通过指向对象的指针访问getx
    return 0;
}