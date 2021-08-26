#include <iostream>
using namespace std;

int main(){
    void *p;
    int i=10;
    p=&i;
    //cout<<*p<<endl;
    int *pv=static_cast<int *>(p);
    cout<<*pv<<endl; 
    return 0;
}