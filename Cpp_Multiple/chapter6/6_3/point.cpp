//point.cpp
#include <iostream>
#include "point.h"
using namespace std;
point::point(){
    x=y=0;
    cout<<"default called"<<endl;
}
point::point(int x, int y):x(x),y(y){
    cout<<"called"<<endl;
}
point::~point(){
    cout<<"decalled"<<endl;
}
void point::move(int newx,int newy){
    cout<<"move to"<<newx<<","<<newy<<endl;
    x=newx;
    y=newy;
}