#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "point.h"
class rectangle:private point{
    public:
    void initrectangle(float xx,float yy,float ww,float hh){
        initpoint(xx,yy);
        this->w=ww;
        this->h=hh;
    }
    void showp()const{std::cout<<p<<std::endl;}//访问父类的保护成员
    float geth()const {return h;}
    float getw()const {return w;}
    float getrx(){return point::getx();}
    float getry(){return point::gety();}
    void rmove(float xx,float yy){return point::move(xx,yy);}
    private:
    float w,h;
};

#endif