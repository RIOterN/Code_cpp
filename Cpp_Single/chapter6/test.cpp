#include <iostream>
using namespace std;

int main(){
    const int i=0;
    const int *p=&i;
    cout<<*p<<endl;
    int j=10;
    p=&j;
    cout<<*p<<endl;
    int *const ptr=&j;
  //  ptr=&i;
    cout<<*ptr<<endl;
    return 0;
}