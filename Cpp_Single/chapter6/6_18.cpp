/*
6-18创建动态数组类
*/
#include <iostream>
#include <cassert>
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
class arrayptr{
    public:
        arrayptr(int sz):size(sz){ptr=new point[sz];}
        ~arrayptr(){cout<<"deleting"<<endl;delete[] ptr;};
        //返回下标为index数组的元素。
        point &element (int index)//指针型函数，返回值类型是指针
        {
            assert(index>=0&&index<size);
            return ptr[index];
        }
    private:
        int size;
        point *ptr;
};
int main(){
    int count;
    cout<<"输入点的个数"<<endl;
    cin>>count;
    arrayptr ps(count);
    ps.element(0).move(5,0);
    ps.element(1).move(1,2);
    cout<<(ps.element(0).getx())<<endl;
    return 0;
}