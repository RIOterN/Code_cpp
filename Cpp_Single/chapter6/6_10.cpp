#include <iostream>
using namespace std;

void fun(float y,int *j,float *p){
    *j=static_cast<int>(y);
    *p=y-*j;
}
int main(){
    float x=5.2345;
    int i=0;
    float f=0;
    fun(x,&i,&f);
    cout<<"x="<<x<<endl;
    cout<<"f="<<f<<endl;
    return 0;
}