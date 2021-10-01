/*
公有继承
*/
#include <iostream>
using namespace std;
class A{
    public:
    int afun(){return x;}
    protected:
    int x=0;
    private:

};
class B:public A{
    public:
    int function();
};
int B::function(){
    x=5;
    return x;
}

int main(){
    int i=0;
    A a;
    cout<<a.afun()<<endl;
    B b;
    i=b.function();
    cout<<i<<endl;
    return 0;
}