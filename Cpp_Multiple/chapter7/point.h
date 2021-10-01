#ifndef _POINT_H
#define _POINT_H
#include <iostream>
class point{
    public:
    void initpoint(float x=0,float y=0){this->x=x;this->y=y;}
    point(float xx=0,float yy=0):x(xx),y(yy){}
    void move(float offx,float offy){x+=offx;y+=offy;}
    float getx()const{return x;}
    float gety()const{return y;}
    protected://
    float p=100;
    private:
    float x,y;
    void showprivate(){std::cout<<"private"<<std::endl;}
};


#endif