//main.cpp
#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;
float linefit(const point pp[],int np){
    float avgx=0,avgy=0;
    float lxx=0,lyy=0,lxy=0;
    for(int i=0;i<np;i++){
        avgx+=pp[i].getx()/np;
        avgy+=pp[i].gety()/np;
    }
    for(int i=0;i<np;i++)
    {
        lxx+=(pp[i].getx()-avgx)*(pp[i].getx()-avgx);
        lxy+=(pp[i].getx()-avgx)*(pp[i].gety()-avgy);
        lyy+=(pp[i].gety()-avgy)*(pp[i].gety()-avgy);
    };
    cout<<"y=ax+b"<<endl;
    cout<<"a="<<lxy/lxx<<" ";
    cout<<"b="<<avgy-avgx*lxy/lxx<<endl;
    return static_cast<float>(lxy/sqrt(lxx*lyy));
}

int main(){
    point p[10]={point(6,10),point(14,20),point(26,30),point(33,40),point(46,50),point(67,70),point(75,80),point(84,90),point(54,60),point(100,100)};
    float r=linefit(p,10);
    cout<<"r="<<r<<endl;
    return 0;
}

