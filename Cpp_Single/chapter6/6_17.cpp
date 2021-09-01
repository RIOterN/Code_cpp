/*
6-17创建动态数组
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

int main(){
    point *ptr=new point[2];
    ptr[0].move(1,2);
    ptr[1].move(3,4);
    delete[] ptr;//删除动态对象数组

    return 0;
}