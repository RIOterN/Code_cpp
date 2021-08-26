//6_3.cpp
#include "point.h"
#include <iostream>
using namespace std;
int main(){
    cout<<"enter"<<endl;
    point a[2];
    for(int i=0;i<2;i++)
        a[i].move(i+10,i+20);
    cout<<"exiting main"<<endl;
    
    return 0;
}