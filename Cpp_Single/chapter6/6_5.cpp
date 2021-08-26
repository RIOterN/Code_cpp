#include <iostream>
using namespace std;

int main(){
    int i;
    int *ptr=&i;
    //ptr=&i;
    i=10;
    cout<<"i="<<i<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<ptr<<endl;
    return 0;
}