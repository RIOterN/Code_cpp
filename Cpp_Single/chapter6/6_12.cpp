////6-12指针访问point类成员
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

int main(){
    point a(4,5);
    point *ptr;
    ptr=&a;
    cout<<a.getx()<<endl;
    cout<<ptr->getx()<<endl;
    cout<<(*ptr).getx()<<endl;

    return 0;
}
/*
*/
#include <iostream>
using namespace std;

int main(){
    
    return 0;
}