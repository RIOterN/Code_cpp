//6_14通过指针访问类的静态数据成员
#include <iostream>
using namespace std;
class point{
  public:
    point(int xx=0,int yy=0):x(xx),y(yy){count++;}
    point(const point &p):x(p.x),y(p.y){count++;}
    ~point(){count--;}
    int getx() const{return x;}
    int gety() const {return y;}
    static int count;
    private:
    	int x,y;
   
};
int point::count=0;
int main()
{
    int *ptr=&point::count;
    point a(4,5);
    cout<<a.getx()<<","<<a.gety()<<endl;
    cout<<"count="<<*ptr<<endl;
    
    point b(a);
    cout<<b.getx()<<","<<b.gety()<<endl;
    cout<<"count="<<*ptr<<endl;
    return 0;
}