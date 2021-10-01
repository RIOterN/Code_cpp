/*
兼容规则
*/
#include <iostream>
using namespace std;
class A{
    public:
    void show() const{cout<<"A show"<<endl;}
};
class B:public A{
    public:
    void show()const{cout<<"B show"<<endl;}
};
class C:public B{
    public:
    void show()const{cout<<"C show"<<endl;}
};

void fun(A *ptr){
    ptr->show();
}
int main(){
    A a;
    B b;
    C c;
    fun(&a);
    fun(&b);//派生类对象地址转换为基类指针
    fun(&c);
    return 0;
}