/*
派生类的构造
*/
#include <iostream>
using namespace std;
class A{
    public:
    A(int i){cout<<"A"<<i<<endl;}
    A(const A &p){cout<<"复制构造函数A被调用"<<endl;}
};
class B{
    public:
    B(int j){cout<<"B"<<j<<endl;}
};
class C{
    public:
    C(){cout<<"C*"<<endl;}
};
class D:public A,public B,public C{
    public:
    D(int a,int b,int c,int d):A(a),n2(d),n1(c),B(b){}
    D(const D&v):A(v){cout<<"复制构造函数D被调用"<<endl;}
    private:
    A n1;
    B n2;
    C n3;
};

int main(){
    D obj(1,2,3,4);
    return 0;
}