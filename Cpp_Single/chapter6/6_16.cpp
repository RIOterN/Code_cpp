/*
6-16创建动态对象
*/
#include <iostream>
using namespace std;
class point{
    public:
    point():x(0),y(0){cout<<"默认对象已创建"<<endl;}
    point(int xx,int yy):x(xx),y(yy){cout<<"自定义对象已经创建"<<endl;}
    ~point(){cout<<"已删除对象"<<endl;}
    int getx() const{return x;}
    int gety() const{return y;}
    void move(int newx,int newy){
        x=newx;
        y=newy;
    }
    private:
    int x,y; 
};


int main()
{
    cout<<"第一次创建"<<endl;
    point *ptr=new point;//point类指针指向创建的的对象。
    delete ptr;
    cout<<"第二部创建"<<endl;
    point *ptr1=new point(1,2);
    delete ptr1;
    

    return 0;
}