/*
6_15通过指针访问类的静态函数成员
*/
#include <iostream>
using namespace std;

class point{
    public:
        point(int xx=0,int yy=0):x(xx),y(yy){count++;}
        point(const point &p):x(p.x),y(p.y){count++;}
        ~point(){count++;}
        static int showcount();

    private:
        int x,y;
        static int count;
};
int point::count=0;
int point::showcount(){
    cout<<count<<endl;
    return 0;
}

int main(){
    int (*funptr)()=point::showcount;//函数名就是地址
    point a(4,5);
    funptr();
    point b(a);
    funptr();
    return 0;
}